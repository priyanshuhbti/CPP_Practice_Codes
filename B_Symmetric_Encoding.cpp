#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

template <class T>
void print(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
void input(vector<ll>& v) {
    for (auto& x : v) {
        cin >> x;
    }
}
#define read(type) readInt<type>()
ll min(ll a, int b) { if (a < b) return a; return b; }
ll min(int a, ll b) { if (a < b) return a; return b; }
ll max(ll a, int b) { if (a > b) return a; return b; }
ll max(int a, ll b) { if (a > b) return a; return b; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 'a' - 'A'; return a; }
string to_lower(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A'; return a; }
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

/* Main()  function */
int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        
        set<char> unique_chars(s.begin(), s.end());
        string r(unique_chars.begin(), unique_chars.end());

       
        unordered_map<char, char> m;
        int len = r.size();
        for (int i = 0; i < len; i++) {
            m[r[i]] = r[len - 1 - i];
        }

       
        string ans = "";
        for (char c : s) {
            ans += m[c];
        }

        cout << ans << endl;
    }
    return 0;
}
