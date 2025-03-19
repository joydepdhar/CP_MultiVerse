class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n * n;
        vector<int> freq(size + 1, 0);
        
        int repeated = -1, missing = -1;
        int actualSum = 0, expectedSum = (size * (size + 1)) / 2;

        // Flatten matrix and track frequency
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int num = grid[i][j];
                actualSum += num;
                freq[num]++;
                if (freq[num] == 2) {
                    repeated = num;
                }
            }
        }

        // Find the missing number
        for (int i = 1; i <= size; i++) {
            if (freq[i] == 0) {
                missing = i;
                break;
            }
        }

        return {repeated, missing};
    }
};