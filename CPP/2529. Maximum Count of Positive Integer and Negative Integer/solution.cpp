class Solution {
    public:
        int indexBinarySearch(const vector<int>& nums, int target) {
            int left = 0, right = nums.size();
            while (left < right) {
                int mid = left + (right - left) / 2;
                if (nums[mid] < target) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }
            return left;
        }
    
        int maximumCount(vector<int>& nums) {
            int pos = indexBinarySearch(nums, 1);
            int neg = indexBinarySearch(nums, 0);
            return max(neg, (int)(nums.size() - pos));
        }
    };