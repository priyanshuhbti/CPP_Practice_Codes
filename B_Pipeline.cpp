#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll n) {
    return (n * (n + 1)) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, k;
    cin >> n >> k;
    n -= 1;  // Reduce n by 1 to account for the starting position
    ll s = sum(k - 1);  // Sum of numbers from 1 to k-1
    
    // If the total sum from 1 to k-1 is less than n, it's impossible
    if (s < n) {
        cout << -1 << endl;
    } else {
        ll l = 0, h = k - 1;
        while (l <= h) {
            ll mid = l + (h - l) / 2;
            if (s - sum(mid) >= n) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        // After the binary search, h will give us the correct answer
        cout << k - 1 - h << endl;
    }

    return 0;
}
