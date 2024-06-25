#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve() {
    ll n, m;
    cin >> n >> m;
    ll a[n+2][m+2] = {0};
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for(ll i = 0; i < m+2; i++) {
        a[0][i] = 0;
        a[n+1][i] = 0;
    }
    // for(ll i = 0; i < n+2; i++) {
    //     for(ll j = 0; j < m+2; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    bool ok = false;
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= m; j++) {
            if(a[i][j] > a[i][j+1] && a[i][j] > a[i][j-1] && a[i][j] > a[i+1][j] && a[i][j] > a[i-1][j]) {
                a[i][j] = max({a[i][j+1], a[i][j-1], a[i+1][j],  a[i-1][j]});
            }
        }
    }
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll ttt; cin >> ttt;
    while(ttt--) {
        solve();
    }
    return 0;
}