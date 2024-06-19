#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 1);

    int cnt1 = 0, cnt2 = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] > 0) cnt1++;
        else cnt2++;
    }

    int ans = 0;
    if(cnt1 > cnt2){
        int t = cnt1 - cnt2;
        t /= 2;
        ans += t;
        cnt1 -= t;
        cnt2 += t;
    }

    if(cnt2 % 2 == 1) ans++;
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
