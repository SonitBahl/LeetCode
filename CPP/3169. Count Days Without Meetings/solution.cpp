class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            sort(meetings.begin(), meetings.end());
    
            int occupiedDays = 0, lastEnd = 0;
    
            for (int i = 0; i < meetings.size(); i++) {
                int start = meetings[i][0], end = meetings[i][1];
    
                if (end < lastEnd) continue;
                if (start > lastEnd + 1) {
                    occupiedDays += end - start + 1;
                } else {
                    occupiedDays += end - lastEnd;
                }
                lastEnd = max(lastEnd, end);
            }
    
            return days - occupiedDays;
        }
    };
    