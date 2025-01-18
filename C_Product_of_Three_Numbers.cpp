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
void solve(){
    ll n;
    cin>>n;
    for(ll i=2; i<= sqrt(n); i++){
        for(ll j=i+1; j<=sqrt(n/i)&& i*j<n; j++){
            ll p= i*j;
            if(n%p ==0 && (n/p) !=i && (n/p) !=j && (n/p)>1){
                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<" "<<(n/p)<<endl;
               return;

            }
        }
    }
    cout<<"NO"<<endl;

    

}
/* Main()  function */
int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // #endif

   ll t;
cin >> t;
while (t--)
{
    solve();
    

    
}

    return 0;
}


