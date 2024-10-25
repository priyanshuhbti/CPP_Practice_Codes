#include <bits/stdc++.h>
using namespace std;

/* OM NAMO NARAYANA */
/* Code written by Priyanshu Yadav */

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

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

ll min_val(ll a, int b) { return a < b ? a : b; }
ll min_val(int a, ll b) { return a < b ? a : b; }
ll max_val(ll a, int b) { return a > b ? a : b; }
ll max_val(int a, ll b) { return a > b ? a : b; }
ll gcd_val(ll a, ll b) { return b == 0 ? a : gcd_val(b, a % b); }
ll lcm_val(ll a, ll b) { return a / gcd_val(a, b) * b; }
bool is_prime(ll num) { if (num == 1) return 0; for (int i = 2; i <= round(sqrt(num)); ++i) if (num % i == 0) return 0; return 1; }
void print_yes() { cout << "YES\n"; }
void print_no() { cout << "NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

/* clang-format on */

/* Main()  function */
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; // Number of test cases
    cin >> t; // Read number of test cases
    while (t--) {
        int n; // Number of elements
        cin >> n; // Read the number of elements
        vector<int> arr(n + 1); // Use 1-based indexing
        
        // Read the elements
        f(i, 1, n + 1) {
            cin >> arr[i]; // Read the elements
        }

        // Perform the swap operation based on the conditions
        f(i, 2, n / 2 + 1) {
            // Swap if the conditions are met
            if (arr[i] == arr[i - 1] || arr[n - i + 1] == arr[n - i + 2]) {
                swap(arr[i], arr[n - i + 1]);
            }
        }

        // Calculate the answer
        int val = 0; // Initialize disturbances count
        f(i, 1, n) {
            // Count the disturbances based on adjacent elements
            if (arr[i] == arr[i + 1]) {
                val++; // Increment disturbance count
            }
        }

        cout << val<< '\n'; // Output the result
    }

    return 0;
}
