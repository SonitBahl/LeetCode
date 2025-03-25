class Solution {
    public:
        bool canRob(const vector<int>& nums, int k, int cap) {
            int count = 0;
            bool skip = false;
            for (int num : nums) {
                if (!skip && num <= cap) {
                    count++;
                    skip = true;
                } else {
                    skip = false;
                }
            }
            return count >= k;
        }
    
        int minCapability(vector<int>& nums, int k) {
            int left = *min_element(nums.begin(), nums.end());
            int right = *max_element(nums.begin(), nums.end());
            int result = right;
            
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (canRob(nums, k, mid)) {
                    result = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            
            return result;
        }
    };