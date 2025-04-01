class Solution {
public:
    string longestPalindrome(string s) {
       int start = 0, maxLen = 0;
        
        for (int i = 0; i < s.size(); i++) {
            for (int l = i, r = i; l >= 0 && r < s.size() && s[l] == s[r]; l--, r++) {
                if (r - l + 1 > maxLen) {
                    start = l;
                    maxLen = r - l + 1;
                }
            }
            for (int l = i, r = i + 1; l >= 0 && r < s.size() && s[l] == s[r]; l--, r++) {
                if (r - l + 1 > maxLen) {
                    start = l;
                    maxLen = r - l + 1;
                }
            }
        }
        
        return s.substr(start, maxLen);
    }
};