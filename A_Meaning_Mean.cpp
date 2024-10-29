#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

// Helper function to generate all combinations of indices
void generateCombinations(int n, int m, int start, vector<int>& currentCombination, vector<vector<int>>& allCombinations) {
    if (currentCombination.size() == m) {
        allCombinations.push_back(currentCombination);
        return;
    }
    for (int i = start; i <= n; i++) {
        currentCombination.push_back(i);
        generateCombinations(n, m, i + 1, currentCombination, allCombinations);
        currentCombination.pop_back();
    }
}

int maxNetVulnerability(const vector<vector<int>>& vulnerability, int n, int m) {
    vector<int> currentCombination;
    vector<vector<int>> allCombinations;

    // Generate all combinations of m indices from n
    generateCombinations(n - 1, m, 0, currentCombination, allCombinations);

    int maxNetVul = numeric_limits<int>::min();

    // Evaluate each combination
    for (const auto& combination : allCombinations) {
        vector<int> maxColumnVulnerabilities(m, 0);
        
        // Calculate the max vulnerability for each column for the given combination of rows
        for (int row : combination) {
            for (int col = 0; col < m; col++) {
                maxColumnVulnerabilities[col] = max(maxColumnVulnerabilities[col], vulnerability[row][col]);
            }
        }

        // Find the minimum among the max column vulnerabilities
        int netVul = *min_element(maxColumnVulnerabilities.begin(), maxColumnVulnerabilities.end());

        // Track the maximum of all these minimums
        maxNetVul = max(maxNetVul, netVul);
    }

    return maxNetVul;
}

int main() {
    int n = 4;
    int m = 3;
    vector<vector<int>> vulnerability = {
        {1, 3, 1},
        {3, 1, 1},
        {2, 2, 2},
        {1, 1, 3}
    };

    int result = maxNetVulnerability(vulnerability, n, m);
    cout << "Maximum possible net vulnerability: " << result << endl;

    return 0;
}
