#include <bits/stdc++.h>
using namespace std;

/* OM NAMO NARAYANA */
/* Code written by Priyanshu Yadav  */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define vi vector<int>

/* FUNCTIONS */
#define f(i, start, end) for (long long int i = start; i < end; i++)

/* Utility function to read pairs and values */
void readPairs(ll numPairs, vector<pii>& pairs, vi& values) {
    f(i, 0, numPairs) {
        cin >> pairs[i].first >> pairs[i].second; // Read pairs
        values[2 * i] = pairs[i].first; // Store first element
        values[2 * i + 1] = pairs[i].second; // Store second element
    }
}

/* Function to compress values */
void compressValues(const vi& values, map<ll, ll>& valueMap, ll& currentIndex) {
    for (ll value : values) {
        if (valueMap.find(value) == valueMap.end()) {
            valueMap[value] = currentIndex++; // Assign index to unique value
        }
    }
}

/* Function to prepare the result */
vector<array<ll, 3>> prepareResult(const vector<pii>& pairs, const map<ll, ll>& valueMap, ll numPairs) {
    vector<array<ll, 3>> results(numPairs);
    f(i, 0, numPairs) {
        results[i][0] = valueMap.at(pairs[i].first) + valueMap.at(pairs[i].second); // Calculate sum
        results[i][1] = pairs[i].first; // Store original first value
        results[i][2] = pairs[i].second; // Store original second value
    }
    return results;
}

/* Main function to execute the program */
signed main() {
    ll totalTestCases; 
    cin >> totalTestCases; // Read number of test cases

    while (totalTestCases--) {
        ll numberOfPairs; 
        cin >> numberOfPairs; // Read number of pairs

        vector<pii> pairList(numberOfPairs);
        vi valueList(2 * numberOfPairs);
        
        readPairs(numberOfPairs, pairList, valueList); // Read pairs

        sort(valueList.begin(), valueList.end()); // Sort values
        map<ll, ll> uniqueValueMap; 
        ll currentIndex = 1;

        compressValues(valueList, uniqueValueMap, currentIndex); // Compress values

        auto results = prepareResult(pairList, uniqueValueMap, numberOfPairs); // Prepare results

        // Sort the result array based on the sum of pairs
        sort(results.begin(), results.end(), [](const array<ll, 3>& a, const array<ll, 3>& b) {
            return a[0] < b[0]; // Compare based on the first element
        });

        // Output the results for each pair
        f(i, 0, numberOfPairs) {
            cout << results[i][1] << " " << results[i][2] << " "; // Print original pairs
        }
        cout << endl; // New line after each test case output
    }

    return 0; // Indicate successful completion of the program
}
