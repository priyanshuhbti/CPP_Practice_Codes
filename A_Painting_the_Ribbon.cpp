#include <iostream>
#include <algorithm> // Include this header for the max function
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int val = n / m, rem = n % m;
    if ((m - 1) * val + max(rem - 1, 0LL) > k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int test = 1;
    cin >> test;
    while (test--) solve();
    return 0;
}
