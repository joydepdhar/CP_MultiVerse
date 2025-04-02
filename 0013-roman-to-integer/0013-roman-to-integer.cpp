class Solution {
public:
     int romanToInt(string s) {
        int roman[26] = {}; // Array to store Roman numeral values
        roman['I' - 'A'] = 1;
        roman['V' - 'A'] = 5;
        roman['X' - 'A'] = 10;
        roman['L' - 'A'] = 50;
        roman['C' - 'A'] = 100;
        roman['D' - 'A'] = 500;
        roman['M' - 'A'] = 1000;
        
        int result = 0, n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && roman[s[i] - 'A'] < roman[s[i + 1] - 'A']) {
                result -= roman[s[i] - 'A'];
            } else {
                result += roman[s[i] - 'A'];
            }
        }
        
        return result;
    }
};