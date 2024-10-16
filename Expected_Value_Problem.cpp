#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n;
        cin >> n; // Read number of people in the queue

        vector<int> wealth(n);
        for (int i = 0; i < n; ++i) {
            cin >> wealth[i]; // Read wealth of each person
        }

        int sushilPosition = n - 1; // Sushil starts at the end of the queue
        int sushilWealth = wealth[sushilPosition]; // Sushil's wealth

        // Sushil will bully people in front of him
        while (sushilPosition > 0) {
            int frontWealth = wealth[sushilPosition - 1]; // Wealth of the person in front
            if (frontWealth <= sushilWealth / 2) {
                // If Sushil can bully the person in front
                sushilPosition--; // Move Sushil forward in the queue
            } else {
                break; // Stop if he cannot bully anyone anymore
            }
        }

        // Output the final position of Sushil (1-based index)
        cout << sushilPosition + 1 << endl; // Convert to 1-based index
    }

    return 0;
}