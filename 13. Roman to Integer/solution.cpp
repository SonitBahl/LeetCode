#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:

int romanToInt(string s) {
    unordered_map<char, int> roman_values = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int result = 0;
    int prev_value = 0;
    
    for (int i = s.length() - 1; i >= 0; i--) {
        int current_value = roman_values[s[i]];
        
        if (current_value < prev_value) {
            result -= current_value;
        } else {
            result += current_value;
        }
        
        prev_value = current_value;
    }
    
    return result;
}

int main() {
    string roman_numeral;
    cout << "Enter a Roman numeral: ";
    cin >> roman_numeral;
    
    int integer_value = romanToInt(roman_numeral);
    cout << "Integer value: " << integer_value << endl;
    
    return 0;
}
};