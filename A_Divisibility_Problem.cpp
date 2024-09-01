#include <bits/stdc++.h>
using namespace std;


//WIfi is far better than the mobile network ..

void solve() {
    int a,b;
    cin>>a>>b;
    if(a % b ==0) cout<<0<<endl;

    else cout<<b- a % b<<endl;

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