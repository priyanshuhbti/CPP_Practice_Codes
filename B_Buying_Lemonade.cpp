#include <bits/stdc++.h>
#define fi first
#define se second
const int inf = 1e9;

using namespace std;

int a[200001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        for (int i = 1; i <= n; ++i) 
            a[i] = 0;
        
        for (int i = 1; i <= n; ++i) 
            cin >> a[i];
        
        long long ans = 0;
        sort(a + 1, a + n + 1);
        
        for (int i = 1; i <= n; ++i) {
            if (a[i] * (n - i + 1) >= k) {
                ans += k;
                break;
            } else {
                ans += a[i] + 1;
                k -= a[i];
            }
        }
        
        cout << ans << '\n';
    }
}


