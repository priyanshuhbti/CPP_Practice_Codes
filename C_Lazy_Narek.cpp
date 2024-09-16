#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function to calculate the maximum score
int calculateMaxScoreDifference(int n, int m, vector<string>& strings) {
    
    int maxScore = 0;
    int totalNarekLetters = 0;
    vector<int> narekCounts(5, 0);  // Indices for 'n', 'a', 'r', 'e', 'k'

    // Count occurrence of 'n', 'a', 'r', 'e', 'k' in each string
    for (const auto& s : strings) {
        int tempNarekCounts[5] = {0};

        for (char c : s) {
            if (c == 'n') tempNarekCounts[0]++;
            if (c == 'a') tempNarekCounts[1]++;
            if (c == 'r') tempNarekCounts[2]++;
            if (c == 'e') tempNarekCounts[3]++;
            if (c == 'k') tempNarekCounts[4]++;
        }

        // Add to the main count for total available letters
        for (int i = 0; i < 5; ++i) {
            narekCounts[i] += tempNarekCounts[i];
        }
    }

    // Calculate how many full "narek" sequences can be formed
    int fullNarekSequences = min({narekCounts[0], narekCounts[1], narekCounts[2], narekCounts[3], narekCounts[4]});
    
    maxScore = fullNarekSequences * 5;  // Each full "narek" sequence adds 5 to the score
    
    // Total number of potential scoring characters is the sum of all found
    totalNarekLetters = narekCounts[0] + narekCounts[1] + narekCounts[2] + narekCounts[3] + narekCounts[4];
    
    // ChatGPT scores points for each unused "narek" letter
    int chatGPTScore = totalNarekLetters - (fullNarekSequences * 5);
    
    return maxScore - chatGPTScore;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> strings(n);

        for (int i = 0; i < n; ++i) {
            cin >> strings[i]; // Read each string
        }

        // Calculate and output the result for each test case
        cout << calculateMaxScoreDifference(n, m, strings) << endl;
    }

    return 0;
}
