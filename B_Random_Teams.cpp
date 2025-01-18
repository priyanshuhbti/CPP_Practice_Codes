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

 ll n,m;
 cin>>n>>m;

 ll kmin=0, kmax=0;
 kmin= m* ((n/m)*(n/m -1)/2) + (n%m)* (n/m);
 kmax=(n-m+1 )* (n-m) /2;

 cout<<kmin<<" "<<kmax<<endl;
 

    return 0;
}


