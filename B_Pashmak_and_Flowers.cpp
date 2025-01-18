#include <bits/stdc++.h>
using namespace std;
      
/* OM NAMO NARAYANA */
/* Code written by Priyanshu Yadav  */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* clang-format on */

/* Main()  function */
int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // #endif

int n;
cin>>n;
int mn=INT_MAX ,mx= 0;
unordered_map<int ,ll> mp;
for(int i=0; i<n; i++){
    int x;
    cin>>x;
    mp[x]++;
    mn = min(mn,x);

    mx=max(mx,x) ;


}
if(mx==mn){
    cout<<0<< " "<<mp[mn] *(mp[mn]-1)/2;

}else{
    cout<<mx-mn<<" "<<mp[mx] * mp[mn];
    
}
    return 0;
}


