class Solution {
    public:
        bool canRepairInTime(const std::vector<int>& ranks, long long time, int cars) {
            long long totalCars = 0;
            for (int rank : ranks) {
                totalCars += static_cast<long long>(sqrt(time / rank));
                if (totalCars >= cars) return true;
            }
            return totalCars >= cars;
        }
    
        long long repairCars(std::vector<int>& ranks, int cars) {
            long long left = 1;
            long long right = static_cast<long long>(*std::min_element(ranks.begin(), ranks.end())) * cars * cars;
            long long result = right;
            
            while (left <= right) {
                long long mid = left + (right - left) / 2;
                if (canRepairInTime(ranks, mid, cars)) {
                    result = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            
            return result;
        }
    };