#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        long long original_sum = 0;
        vector<long long> S, T;
        for (int i = 0; i < n; ++i) {
            if (i >= l - 1 && i <= r - 1) {
                original_sum += a[i];
                S.push_back(a[i]);
            } else {
                T.push_back(a[i]);
            }
        }
        
        sort(S.rbegin(), S.rend());
        sort(T.begin(), T.end());
        
        long long gain = 0;
        int m = min(S.size(), T.size());
        for (int i = 0; i < m; ++i) {   
            if (S[i] > T[i]) {
                gain += S[i] - T[i];
            } else {
                break;
            }
        }
        
        cout << original_sum - gain << '\n';
    }
    
    return 0;
}