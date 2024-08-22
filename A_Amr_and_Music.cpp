#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    
    vector<pair<int ,int >> vec;
    int b;

    int cnt=0; 
    for(int i=0; i<n; i++){
        cin>>b;

        vec.push_back({b,i+1});

    }
    int days =k;
    

      vector<int> v;

    sort(vec.begin(), vec.end());
    for(int i=0; i<n; i++){
        days-=vec[i].first;
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