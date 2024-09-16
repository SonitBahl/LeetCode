class Solution {
public:
    bool isPalindrome(int x) {
        string strx = to_string(x);
        int left = 0;
        int right = strx.length() - 1;
        
        while(left < right){
            if (strx[left] != strx[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};