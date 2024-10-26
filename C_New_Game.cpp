#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
#define loop for( ll i=0;i<n;i++)

inline void solve(){
    ll n,k;cin>>n>>k;ll a[n];
    loop{cin>>a[i];}
    sort(a,a+n);
    ll j=0,ans=0;
    loop{ j=max(i,j);
        while((j+1)<n && a[j+1]<(a[i]+k) && a[j+1]<=(a[j]+1)){
            j++; 
        } 
    ans=max(ans,j-i+1);
    } 
    cout<<ans<<endl;
}

int main() {
    int t;cin>>t;
    while(t--){
     solve();}
    return 0;
}