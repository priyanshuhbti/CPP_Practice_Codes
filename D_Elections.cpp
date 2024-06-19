#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

// Function to process each test case
vector<int> evaluateTestCase(int candidates, int extraVotes, vector<int> initialVotes) {
    // Calculate total votes
    int accumulatedVotes = 0;
    for (int vote : initialVotes) {
        accumulatedVotes += vote;
    }

    // Copy initial votes and add extra votes to the first candidate
    vector<int> adjustedVotes = initialVotes;
    adjustedVotes[0] += extraVotes;

    // Determine the maximum original votes and index with maximum adjusted votes
    int highestOriginalVotes = *max_element(initialVotes.begin(), initialVotes.end());
    int winningIndex = distance(adjustedVotes.begin(), max_element(adjustedVotes.begin(), adjustedVotes.end()));

    int runningTotal = 0;
    vector<int> outcome(candidates);

    // Determine the outcome for each candidate
    for (int i = 0; i < candidates; i++) {
        if (i == winningIndex) {
            outcome[i] = 0;
        } else {
            if (initialVotes[i] + runningTotal + extraVotes >= highestOriginalVotes) {
                outcome[i] = i;
            } else {
                outcome[i] = i + 1;
            }
        }
        runningTotal += initialVotes[i];
    }

    return outcome;
}

// Main function to read input and process test cases
int main() {
    // Read number of test cases
    int testCaseCount;
    cin >> testCaseCount;
    cin.ignore();

    for (int i = 0; i < testCaseCount; i++) {
        // Read number of candidates and extra votes
        string line;
        getline(cin, line);
        stringstream ss(line);
        int candidates, extraVotes;
        ss >> candidates >> extraVotes;

        // Read votes for each candidate
        getline(cin, line);
        ss.clear();
        ss.str(line);
        vector<int> initialVotes(candidates);
        for (int j = 0; j < candidates; j++) {
            ss >> initialVotes[j];
        }

        // Process the current test case
        vector<int> result = evaluateTestCase(candidates, extraVotes, initialVotes);

        // Print the result for the current test case
        for (int j = 0; j < candidates; j++) {
            if (j > 0) {
                cout << " ";
            }
            cout << result[j];
        }
        cout << endl;
    }

    return 0;
}
