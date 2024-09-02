#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int g = __gcd(a, b);

        vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            vec[i] = num % g; 
        }

        sort(vec.begin(), vec.end());
        int ans = vec[n - 1] - vec[0]; 
        for (int i = 1; i < n; i++) {
            ans = min(ans, vec[i - 1] + g - vec[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
