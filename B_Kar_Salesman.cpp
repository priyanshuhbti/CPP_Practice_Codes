#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long x;
    cin >> n >> x;  
    
    vector<long long> vec(n);  
    long long sum = 0, mx = 0;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i];  
        mx = max(mx, vec[i]); 
    }

    cout << max(mx, (sum + x - 1LL) / x) << endl;
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
