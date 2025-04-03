class Solution {
public:
     string convert(string s, int numRows) {
        if (numRows == 1) return s;  // No conversion needed

        vector<string> rows(min(numRows, int(s.size())));
        int curRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[curRow] += c;  // Append character to the current row
            if (curRow == 0 || curRow == numRows - 1)
                goingDown = !goingDown;  // Change direction at boundaries
            curRow += goingDown ? 1 : -1;
        }

        string result;
        for (string row : rows)
            result += row;  // Concatenate all rows

        return result;
    }
};