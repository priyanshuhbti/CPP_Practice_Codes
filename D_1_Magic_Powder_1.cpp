#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i = 0; i<n;i++)cin>>a[i];
    for(int i = 0; i<n;i++)cin>>b[i];
    int ans = 0;
    int l = 0,r = 2e4+7;
    while(l<=r){
        int cookies = (l+r)/2;
        int needed = 0;
        for(int i = 0; i<n;i++){
            needed += max(0LL,a[i]*cookies-b[i]);
        }
        if(needed<=k){
            l = cookies+1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
            ans = cookies;
        }else{
            r = cookies-1;
        }
    }
    cout<<ans<<"\n";
}

signed main(){
    solve();
    return 0;
}