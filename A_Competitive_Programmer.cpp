#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str;
    cin >> str;

    // Calculate the sum of the digits
    int digit_sum = accumulate(str.begin(), str.end(), 0, [](int acc, char c) {
        return acc + (c - '0'); // Convert char to integer
    });

    // Check if the sum of digits is divisible by 3
    if (digit_sum % 3 != 0) {
        cout << "cyan" << endl;
        return;
    }

    bool zero = false;
    bool even = false;

    // Check for at least one '0' and one even digit
    for (char c : str) {
        if (c == '0') {
            zero = true;
        } else if ((c - '0') % 2 == 0) {
            even = true;
        }
    }

    if (zero && even) {
        cout << "red" << endl;
    } else {
        cout << "cyan" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
