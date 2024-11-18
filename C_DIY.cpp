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

/* FUNCTIONS */
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back


/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

/* clang-format on */

void solve() {
	int n;
	cin >> n;
 
	map<int, int> mp;
	vector<int> a(n);
	for (auto &i : a) cin >> i, mp[i]++;
 
	vector<int> v;
	for (auto &i : mp) {
		while (i.second > 1) {
			v.push_back(i.first);
			i.second -= 2;
		}
	}
 
	if (v.size() < 4) {
		cout << "NO" << "\n";
		return;
	}
 
	cout << "YES" << "\n";
 
	int x1 = v[0], y1 = v[1], x2 = v[v.size() - 2], y2 = v[v.size() - 1];
 
 
	cout << x1 << " " << y1 << " " << x1 << " " << y2 << " " << x2 << " " << y2 << " " << x2 << " " << y1 << "\n";
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


