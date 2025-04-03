class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            int n = nums.size();
            long long result = 0;
    
            vector<int> max_before(n, 0);
            max_before[0] = nums[0];
            for (int j = 1; j < n; j++) {
                max_before[j] = max(max_before[j - 1], nums[j - 1]);
            }
    
            vector<long long> best_diff(n, LLONG_MIN);
            for (int j = 1; j < n; j++) {
                best_diff[j] = max(best_diff[j - 1], (long long)max_before[j] - nums[j]);
            }
    
            for (int k = 2; k < n; k++) {
                if (best_diff[k - 1] != LLONG_MIN) {
                    result = max(result, best_diff[k - 1] * nums[k]);
                }
            }
    
            return result;
        }
    };
    