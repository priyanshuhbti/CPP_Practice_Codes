#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using vll = vector<ll>;
using vvll = vector<vll>;

// Function to solve each test case
void solve_test_case() {
    ll n, c;
    cin >> n >> c; // Read n and c
    vll rituals(n);
    for (ll i = 0; i < n; ++i) {
        cin >> rituals[i]; // Read rituals
    }
    vll mods(n, 0); // Initialize mods array with 0
    mods[0] = 1; // Set first element to 1

    // Lambda function to check if product sum is within limit
    auto check = [&]() {
        ll prod = 0;
        for (ll i = 0; i < n; ++i) {
            if (mods[i] == 0)
                continue;
            for (ll j = 0; j < n; ++j) {
                if (mods[j] == 0)
                    prod += rituals[i] * rituals[j];
            }
        }
        return prod <= c;
    };

    if (check()) {
        cout << 1 << '\n'; // If initial check passes, print 1
    } else {
        ll size = 1;
        while (size < n) {
            ll mi = -1;
            for (ll i = 0; i < n; ++i) {
                if (mods[i] == 0 && (mi == -1 || rituals[i] > rituals[mi])) {
                    mi = i; // Find maximum element which is not yet marked
                }
            }
            mods[mi] = 1; // Mark the selected element
            size++;
            if (check()) {
                cout << size << '\n'; // Print the size if check passes
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); // Disable synchronization with C I/O
    cin.tie(NULL); // Untie cin from cout

    ll total_tests;
    cin >> total_tests; // Read number of test cases
    for (ll test_no = 1; test_no <= total_tests; ++test_no) {
        solve_test_case(); // Solve each test case
    }
    return 0;
}
