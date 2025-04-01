class Solution {
public:
    string longestPalindrome(string s) {
             if (s.empty()) return "";

        // Transform string to avoid even-length palindrome issues
        string t = "#";
        for (char c : s) {
            t += c;
            t += "#";
        }

        int n = t.size();
        vector<int> p(n, 0);  // Stores radius of palindrome at each center
        int c = 0, r = 0;      // Center and right boundary of the current palindrome
        int maxLen = 0, centerIdx = 0;

        for (int i = 0; i < n; i++) {
            int mirror = 2 * c - i;
            if (i < r) 
                p[i] = min(r - i, p[mirror]);

            // Expand palindrome at i
            while (i - p[i] - 1 >= 0 && i + p[i] + 1 < n && t[i - p[i] - 1] == t[i + p[i] + 1])
                p[i]++;

            // Update center and right boundary
            if (i + p[i] > r) {
                c = i;
                r = i + p[i];
            }

            // Track max palindrome length
            if (p[i] > maxLen) {
                maxLen = p[i];
                centerIdx = i;
            }
        }

        // Extract longest palindrome from original string
        int start = (centerIdx - maxLen) / 2;
        return s.substr(start, maxLen);
    }
};
