class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end()); // Store banned words in a set
        unordered_map<string, int> wordCount; // Store word frequencies
        
        string word, mostCommonWord;
        int maxFreq = 0;
        
        // Convert paragraph to lowercase and process words in one pass
        for (int i = 0; i <= paragraph.size(); i++) {
            char c = (i < paragraph.size()) ? paragraph[i] : ' '; // Ensure last word is processed

            if (isalpha(c)) {
                word += tolower(c);  // Build the word character by character
            } else if (!word.empty()) {
                if (bannedSet.find(word) == bannedSet.end()) { // If not banned, count it
                    wordCount[word]++;
                    if (wordCount[word] > maxFreq) {
                        maxFreq = wordCount[word];
                        mostCommonWord = word;
                    }
                }
                word.clear(); // Reset word after a non-alphabetic character
            }
        }

        return mostCommonWord;
    }
};