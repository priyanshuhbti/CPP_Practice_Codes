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

	ll n;
	cin>>n;
	ll a,b,c;
	cin>>a>>b>>c;
	ll ans = 0;
	for(ll i=0;i<=(4000/a);i++){
		for(ll j=0;j<=(4000/b);j++){
			ll x = n-i*a-j*b;
			if(x>=0 && x%c==0){
				ans = max(i+j+x/c,ans);
			}
		}	
	}
	cout<<ans<<endl;
    return 0;
}


