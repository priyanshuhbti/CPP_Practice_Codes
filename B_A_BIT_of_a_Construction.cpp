#include <bits/stdc++.h>
using namespace std;

/* Code by P.Y. from IITK */

/* TYPES */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define fr(i, s, e) for (long long int i = s; i < e; i++)
#define cfr(i, s, e) for (long long int i = s; i <= e; i++)
#define rfr(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void pv(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define M 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a, int b) { if (a < b) return a; return b; }
ll min(int a, ll b) { if (a < b) return a; return b; }
ll mx(ll a, int b) { if (a > b) return a; return b; }
ll mx(int a, ll b) { if (a > b) return a; return b; }
ll gc(ll a, ll b) { if (b == 0) return a; return gc(b, a % b); }
ll lc(ll a, ll b) { return a / gc(a, b) * b; }
string up(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 'a' - 'A'; return a; }
string low(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A'; return a; }
bool prm(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
void y() { cout << "YES\n"; }
void n() { cout << "NO\n"; }

/*  Required define Pre-Processors and typedef Constants */
typedef long int i32;
typedef unsigned long int u32;
typedef long long int i64;
typedef unsigned long long int u64;

/* clang-format on */

/* Main()  function */
int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // #endif

    ll z;
    cin >> z;
    while (z--)
    {
        int n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << k << endl;
            continue;
        }
        int s = 1;
        int p = log2(k);
        int time = 1 << p;
        cout << (time - 1) << " ";
        cout << (k - (time - 1)) << " ";
        for (int i = 2; i < n; i++)
        {
            cout << "0"<<" ";
                 
        }
        cout << endl;
    }
    return 0;
}
