#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int chef_ticket = a[0];
    int win_count = 0;

    if (n == 1) {
        return 1000000;
    }

    for (int i = 0; i < n; ++i) {
        int left_bound;
        int right_bound;

        if (i == 0) {
            left_bound = 1;
        } else {
            left_bound = (a[i - 1] + a[i]) / 2 + 1; // Correct left bound
        }

        if (i == n - 1) {
            right_bound = 1000000;
        } else {
            right_bound = (a[i] + a[i + 1]) / 2; // Correct right bound
        }
        if(left_bound>right_bound) continue;

        if (a[i] == chef_ticket) {
            win_count += (right_bound - left_bound + 1);
        }
    }

    return win_count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}