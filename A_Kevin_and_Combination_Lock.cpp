#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9 + 7;
ll modd = 998244353;

void solve() {
    ll n;
    cin>>n;
    if(n%33==0) {
        cout<<"YES"<<"\n";

    }
    else {
        cout<<"NO"<<"\n";
    }

} 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t=1;
    cin >> t;
    
    while (t--) solve();

    return 0;
}