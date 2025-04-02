class Solution {
public:
     int romanToInt(string s) {
        int roman[26] = {}; 
        roman['I' - 'A'] = 1;
        roman['V' - 'A'] = 5;
        roman['X' - 'A'] = 10;
        roman['L' - 'A'] = 50;
        roman['C' - 'A'] = 100;
        roman['D' - 'A'] = 500;
        roman['M' - 'A'] = 1000;
        
        int result = 0, prevValue = 0;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            int currValue = roman[s[i] - 'A'];
            if (currValue < prevValue) {
                result -= currValue;  // Subtract if smaller than previous
            } else {
                result += currValue;  // Otherwise, add
            }
            prevValue = currValue;  // Update previous value
        }
        
        return result;
    }
};