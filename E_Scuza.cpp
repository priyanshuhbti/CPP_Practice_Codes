#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define all(v) v.begin(), v.end()
#define amax(a, b) a = max(a, b)
#define ub upper_bound

int main() {
    int n, q;
    cin >> n >> q; 
    
    vi a(n);     
    for (int &x : a) cin >> x; 

    vi pre(n + 1, 0); 
    rep(i, 0, n)
        pre[i + 1] = pre[i] + a[i];
    
    rep(i, 1, n)
        amax(a[i], a[i - 1]); 

    rep(i, 0, q) {
        int x;
        cin >> x; 
        int z = ub(all(a), x) - a.begin(); 
        cout << pre[z] << ' '; 
    }
    cout << endl; 
    return 0;
}
