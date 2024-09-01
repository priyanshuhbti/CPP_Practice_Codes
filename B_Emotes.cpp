#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n,m,k;cin>>n>>m>>k;
  ll a[n];
  for(ll i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  ll x=a[n-1],y=a[n-2];
  ll tan=x*k+y;
  ll ans=(m/(k+1))*tan+(m%(k+1))*x;
  cout<<ans<<endl;
}