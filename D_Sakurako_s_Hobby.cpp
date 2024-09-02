#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n; // Number of elements in the array
    vector<int> p(n); // Permutation array
    vector<int> visited(n, 0); // Visited array
    vector<int> result(n, 0); // Result array
    string s; // Colors array (0 -> black, 1 -> white)
    
    // Read the permutation
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        p[i]--; // Convert to 0-indexed
    }

    // Read the colors
    cin >> s;

    // Traverse each element in the array to find all cycles
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            // Find a cycle starting from index i
            vector<int> cycle;
            int current = i;

            // Traverse the cycle
            while (!visited[current]) {
                visited[current] = 1; // Mark as visited
                cycle.push_back(current); // Add to the current cycle
                current = p[current]; // Jump to the next element in the cycle
            }

            // Count the number of black elements in the cycle
            int black_count = 0;
            for (int j : cycle) {
                if (s[j] == '0') { // If black
                    black_count++;
                }
            }

            // Assign the black count to all positions in the cycle
            for (int j : cycle) {
                result[j] = black_count;
            }
        }
    }

    // Output the result for this test case
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}
