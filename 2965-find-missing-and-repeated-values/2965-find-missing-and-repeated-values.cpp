class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long N = n * n;
        
        // Expected sums
        long long sum_expected = (N * (N + 1)) / 2;
        long long sum_square_expected = (N * (N + 1) * (2 * N + 1)) / 6;

        // Actual sums
        long long sum_actual = 0, sum_square_actual = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int num = grid[i][j];
                sum_actual += num;
                sum_square_actual += (long long) num * num;
            }
        }

        // Equations:
        long long diff = sum_actual - sum_expected;  // (Repeated - Missing)
        long long square_diff = sum_square_actual - sum_square_expected;  // (Repeated^2 - Missing^2)

        long long sum = square_diff / diff;  // (Repeated + Missing)

        int repeated = (diff + sum) / 2;
        int missing = sum - repeated;

        return {repeated, missing};
    }
};