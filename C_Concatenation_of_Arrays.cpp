#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long

signed main() {
    ll testCases; 
    cin >> testCases;

    while (testCases--) {
        ll numPairs; 
        cin >> numPairs;

        // Define vectors for pairs and values
        vector<pair<ll, ll>> pairs(numPairs);
        vector<ll> values(2 * numPairs);

        // Input pairs and store values
        for (ll i = 0; i < numPairs; ++i) {
            cin >> pairs[i].first >> pairs[i].second;
            values[2 * i] = pairs[i].first;
            values[2 * i + 1] = pairs[i].second;
        }

        // Sort the values array
        sort(values.begin(), values.end());
        map<ll, ll> valueMap;
        vector<ll> compressed(numPairs * 2);

        // Map unique values to indices
        ll index = 1;
        for (ll i = 0; i < 2 * numPairs; i++) {
            if (valueMap.find(values[i]) == valueMap.end()) {
                valueMap[values[i]] = index++;
            }
        }

        // Compress the pairs
        for (ll i = 0; i < numPairs; ++i) {
            compressed[i * 2] = valueMap[pairs[i].first];
            compressed[i * 2 + 1] = valueMap[pairs[i].second];
        }

        // Prepare the result array
        vector<array<ll, 3>> result(numPairs);
        for (ll i = 0; i < numPairs; ++i) {
            ll sum = compressed[i * 2] + compressed[i * 2 + 1];
            result[i] = {sum, pairs[i].first, pairs[i].second};
        }

        // Sort the result array based on the first column
        sort(result.begin(), result.end(), [](const array<ll, 3>& a, const array<ll, 3>& b) {
            return a[0] < b[0];
        });

        // Output the results
        for (ll i = 0; i < numPairs; ++i) {
            cout << result[i][1] << " " << result[i][2] << " ";
        }
        cout << endl;
    }

    return 0;
}
