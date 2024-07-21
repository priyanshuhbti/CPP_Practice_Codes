#include <iostream>
#include <vector>

using namespace std;

bool canAliceWin(const vector<int>& a) {
    int mx = 0; // Maximum element seen so far

    for (int num : a) {
        if (num >= mx) {
            mx = num; // Update mx if necessary
        }
    }

    return mx % 2 != 0; // Alice wins if mx is odd (she takes the last)
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (canAliceWin(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
