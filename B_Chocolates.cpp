//For the normal task ==>Win11 and For Programming and Deep coding only LInux ..ubuntu LTS 20
//Files bhi sari same hi hai sunc browser . sync accha kr dena .. And use Lunux for programming 

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //Personality and Hard work :)
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
   
   ll n;
   cin>>n;
   vector<ll> vec(n);
   for(ll i=0; i<n; i++){
    cin>>vec[i];

   }
   ll res=vec[n-1];
   for(ll i=n-2; i>=0; i--){
        ll t=min(vec[i+1]-1, vec[i]);
        if(t<0) t=0; 
        vec[i]=t;
        res +=t;

   }
   cout<<res<<endl;

    return 0;
}