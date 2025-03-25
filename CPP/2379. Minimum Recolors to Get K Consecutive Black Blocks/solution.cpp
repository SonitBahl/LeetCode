class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n = blocks.size();
            int minChanges = 1000;
            int currentWCount = 0;
            for (int i = 0; i < k; i++) {
                if (blocks[i] == 'W') {
                    currentWCount++;
                }
            }
            minChanges = currentWCount;
            for (int i = k; i < n; i++) {
                if (blocks[i] == 'W') currentWCount++;
                if (blocks[i - k] == 'W') currentWCount--;  
    
                minChanges = min(minChanges, currentWCount);
            }
    
            return minChanges;
        }
    };