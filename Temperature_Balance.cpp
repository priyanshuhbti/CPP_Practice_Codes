#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long ans = 0;
    long long prefix_sum = 0; // Keep track of the prefix sum

    for (int i = 0; i < n - 1; ++i) {
        prefix_sum += a[i];       // Update the prefix sum
        ans += abs(prefix_sum); // Add the absolute value to the answer
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}