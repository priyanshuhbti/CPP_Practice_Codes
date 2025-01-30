#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        long long ans = 0;
        if (l <= 1 && 1 <= r) {
            ans++;
        }
        long long left = max(l, 2LL);
        long long right_end = r - 1;
        if (right_end >= left) {
            ans += right_end - left + 1;
        }
        cout << ans << endl;
    }
    return 0;
}