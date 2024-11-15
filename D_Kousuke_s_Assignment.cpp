#include <bits/stdc++.h>
using namespace std;

/* OM NAMO NARAYANA */
/* Code written by Priyanshu Yadav */

/* TYPES */
#define ll long long
#define vi vector<int>
#define MOD 1000000007

/* FUNCTIONS */
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define pb push_back
#define eb emplace_back

/* UTILS */
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
bool prime(ll a) { if (a <= 1) return 0; for (ll i = 2; i * i <= a; ++i) if (a % i == 0) return 0; return 1; }
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

/* All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

/* clang-format on */

/* Main() function */
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vi dp(n + 1, 0);
        map<ll, int> mp;
        mp[0] = 0;
        ll sum = 0;

        for (int i = 1; i <= n; i++) {
            sum += a[i - 1];
            dp[i] = dp[i - 1];
            if (mp.count(sum)) {
                dp[i] = max(dp[i], 1 + dp[mp[sum]]);
            }
            mp[sum] = i;
        }

        cout << dp[n] << endl;
    }

    return 0;
}
