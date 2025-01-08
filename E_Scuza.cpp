#include <bits/stdc++.h>
#define int long long
using namespace std;
int t, n, q, a[200005], pre[200005];
void solve() {
  cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    pre[i] = pre[i - 1] + a[i];
    a[i] = max(a[i],a[i - 1]);
  }
  while (q--) {
    int x;
    cin >> x;
    cout << pre[upper_bound(a, a + n + 1, x) - a - 1] << ' ';
  }
  cout << '\n';
}
signed main() {
  for (cin >> t; t--; solve());
  return 0;
}
		       	 		  										   	