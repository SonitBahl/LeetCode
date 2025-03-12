#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<pair<int, int>> numsWithIndex(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            numsWithIndex[i] = {nums[i], i};
        }
        sort(numsWithIndex.begin(), numsWithIndex.end());
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            int sum = numsWithIndex[left].first + numsWithIndex[right].first;

            if (sum == target) {
                result = {numsWithIndex[left].second, numsWithIndex[right].second};
                break;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return result;
    }
};