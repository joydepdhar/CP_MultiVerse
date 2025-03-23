class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        
        // Reverse the entire string
        reverse(s.begin(), s.end());

        int i = 0;
        vector<string> words;
        
        while (i < n) {
            // Skip leading spaces
            while (i < n && s[i] == ' ') i++;

            string word = "";
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the word to correct its order
            if (!word.empty()) {
                reverse(word.begin(), word.end());
                words.push_back(word);
            }
        }

        // Join words with a single space
        return join(words, " ");
    }

private:
    string join(vector<string>& words, string delimiter) {
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += delimiter;
            result += words[i];
        }
        return result;
    }
};
