#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        if (k == 1) return 0;

        vector<long long> pair_sums;
        for (size_t i = 0; i < weights.size() - 1; ++i) {
            pair_sums.push_back(weights[i] + weights[i + 1]);
        }

        sort(pair_sums.begin(), pair_sums.end());

        long long min_score = 0, max_score = 0;
        int n = pair_sums.size();

        for (int i = 0; i < k - 1; ++i) {
            min_score += pair_sums[i];
            max_score += pair_sums[n - 1 - i];
        }

        return max_score - min_score;
    }
};
