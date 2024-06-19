#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


signed  main()
{
   
    int t ;
    cin >> t;
    while (t--)
    {
       ll n;
       cin>>n;
       vector<int> v;
       v.push_back(10);
       v.push_back(11);
       ll i=0;
       while(true){
        if(i>=v.size()) break;
        ll x=v[i]*10;
        ll y=x+1;
        if(x<=n){
            v.push_back(x);

        }
        if(y<=n){
            v.push_back(y);

        }
        i++;

       }
       reverse(v.begin(),v.end());
       while(n>1){
        bool ok=false;
        for(int i=0; i<v.size(); i++){
            if(n%v[i]==0){
                n/=v[i];
                ok=true;

            }
            if(!ok) break;

        }

if(n==1) cout<<"YES"; else cout<<"NO";


       }




    }
    return 0;
}