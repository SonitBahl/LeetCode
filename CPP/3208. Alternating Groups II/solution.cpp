class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            int n = colors.size();
            int count = 0;
    
            int altCount = 1;
            for (int i = 1; i < k; i++) {
                if (colors[i] != colors[i - 1]) altCount++;
            }
            if (altCount == k) count++;
    
            for (int i = 1; i < n; i++) {
                if (colors[i] != colors[i - 1]) altCount--;
                if (colors[(i + k - 1) % n] != colors[(i + k - 2) % n]) altCount++;
                
                if (altCount == k) count++;
            }
    
            return count;
        }
    };