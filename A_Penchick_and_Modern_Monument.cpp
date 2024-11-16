#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>

/* Main() function */
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vll vec(n);
        for (ll i = 0; i < n; i++) {
            cin >> vec[i];
        }

        ll cnt = 1, m = 1; 
        for (ll i = 1; i < n; i++) {
            if (vec[i] == vec[i - 1]) {
                cnt++; 
            } else {
                m = max(m, cnt); 
                cnt = 1;        
            }
        }
        m = max(m, cnt); 

        cout << n - m << endl; 
    }
    return 0;
}
