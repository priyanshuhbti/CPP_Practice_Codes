#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int  main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    ll n,k;
    cin>>n>>k;
    
    vector<pair<ll ,ll >> vec;
    ll b;

    ll cnt=0; 
    for(ll i=0; i<n; i++){
        cin>>b;

        vec.push_back({b,i+1});

    }
    ll days =0;
    

      vector<ll> v;

    sort(vec.begin(), vec.end());
    for(ll i=0; i<n; i++){
        days += vec[i].first;
        if( days <= k){
             cnt++;
             v.push_back(vec[i].second);

        }else{
            break;

        }
    }
    
    cout<<cnt<<endl;
    for(auto x:v){
        cout<<x<<" ";

    }

    return 0;
}