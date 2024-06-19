#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // Read n and m for the test case

        string a;
        cin >> a; // Read the string of problem difficulties

        // Count the occurrences of each difficulty level
        unordered_map<char, int> problem_count;
        for (char c : a) {
            problem_count[c]++;
        }

        int needed_problems = 0;
        // Check for each difficulty level from 'A' to 'G'
        for (char difficulty = 'A'; difficulty <= 'G'; difficulty++) {
            int required = m;
            int available = problem_count[difficulty];
            if (available < required) {
                needed_problems += (required - available);
            }
        }

        cout << needed_problems << endl; // Output the result for the test case
    }

    return 0;
}
