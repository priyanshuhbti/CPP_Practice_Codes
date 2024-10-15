#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to compute the Hamming distance between two strings
int hammingDistance(const string& s1, const string& s2) {
    int dist = 0;
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i]) {
            dist++;
        }
    }
    return dist;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, M;
        cin >> N >> M; // Length of the strings and the number of strings

        vector<string> strings(M);
        for (int i = 0; i < M; ++i) {
            cin >> strings[i]; // Read the strings
        }

        // Replace ?s optimally by calculating the most common character in each column
        string optimalString = strings[0]; // Start with the first string

        for (int j = 0; j < N; ++j) {
            int count0 = 0, count1 = 0;
            for (int i = 0; i < M; ++i) {
                if (strings[i][j] == '0') count0++;
                else if (strings[i][j] == '1') count1++;
            }

            // Replace ? with the most frequent character for that position
            if (count0 > count1) {
                for (int i = 0; i < M; ++i) {
                    if (strings[i][j] == '?') strings[i][j] = '0';
                }
            } else {
                for (int i = 0; i < M; ++i) {
                    if (strings[i][j] == '?') strings[i][j] = '1';
                }
            }
        }

        // Now, calculate the sum of Hamming distances between all pairs
        int totalHammingDistance = 0;
        for (int i = 0; i < M; ++i) {
            for (int j = i + 1; j < M; ++j) {
                totalHammingDistance += hammingDistance(strings[i], strings[j]);
            }
        }

        // Output the result for this test case
        cout << totalHammingDistance << '\n';
    }

    return 0;
}
