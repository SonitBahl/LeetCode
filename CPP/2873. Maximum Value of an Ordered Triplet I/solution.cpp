class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            int n = nums.size();
            long long maxVal = 0;
            int maxLeft = nums[0];
            long long maxDiff = LLONG_MIN;
    
            for (int j = 1; j < n - 1; j++) {
                maxDiff = max(maxDiff, (long long)maxLeft - nums[j]);
                maxVal = max(maxVal, maxDiff * nums[j + 1]);
                maxLeft = max(maxLeft, nums[j]);
            }
    
            return maxVal;
        }
    };
    