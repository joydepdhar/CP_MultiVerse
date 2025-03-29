class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> wordCount;
        for (char &c : paragraph) {
            c = isalpha(c) ? tolower(c) : ' ';
        }
        stringstream ss(paragraph);
        string word;
        string mostCommon;
        int maxFreq = 0;

        while (ss >> word) {
            if (bannedSet.find(word) == bannedSet.end()) {
                wordCount[word]++;
                if (wordCount[word] > maxFreq) {
                    maxFreq = wordCount[word];
                    mostCommon = word;
                }
            }
        }

        return mostCommon;
    }
};