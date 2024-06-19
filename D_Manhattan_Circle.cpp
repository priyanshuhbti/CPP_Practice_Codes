#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int testCases;
    cin >> testCases; // Number of test cases
    for (int caseIndex = 0; caseIndex < testCases; caseIndex++) {
        int rows, cols;
        cin >> rows >> cols; // Read the dimensions of the grid
        int leftMost = cols + 1;
        int rightMost = -1;
        int maxCount = 0;
        vector<string> grid(rows); // Vector to store each row of the grid
        for (int i = 0; i < rows; ++i) {
            cin >> grid[i];
            grid[i] += '.'; // Append a dummy character to handle edge cases
        }

        // Iterate through each row to find leftmost and rightmost '#' and the maximum number of '#' in any row
        for (string row : grid) {
            int flag = 0;
            int count = 0;
            for (int j = 0; j <= cols; ++j) {
                if (row[j] == '#') {
                    count++;
                    if (flag == 0) {
                        flag = 1;
                        leftMost = min(leftMost, j); // Update leftmost index
                    }
                } else if (flag == 1) {
                    rightMost = max(rightMost, j - 1); // Update rightmost index
                    flag = 0;
                }
            }
            maxCount = max(count, maxCount); // Update the maximum number of '#'
        }

        int resultRow = -1;
        // Iterate again to find the row that contains the maximum number of '#'
        for (int i = 0; i < rows; ++i) {
            int count = 0;
            for (int j = 0; j <= cols; ++j) {
                if (grid[i][j] == '#') {
                    count++;
                    if (count == maxCount) {
                        resultRow = i;
                        break;
                    }
                }
            }
        }

        // Output the result: row index (1-based) and approximate middle column (1-based)
        cout << resultRow + 1 << " " << int((leftMost + 1 + rightMost + 1) / 2) << endl;
    }
    return 0;
}
