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
void print_v(vector<T>& v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

ll min_v(ll a, int b) { return a < b ? a : b; }
ll min_v(int a, ll b) { return a < b ? a : b; }
ll max_v(ll a, int b) { return a > b ? a : b; }
ll max_v(int a, ll b) { return a > b ? a : b; }
ll gcd_v(ll a, ll b) { return b == 0 ? a : gcd_v(b, a % b); }
ll lcm_v(ll a, ll b) { return a / gcd_v(a, b) * b; }
bool is_prime(ll n) { if (n == 1) return 0; for (int i = 2; i <= round(sqrt(n)); ++i) if (n % i == 0) return 0; return 1; }
void print_yes() { cout << "YES\n"; }
void print_no() { cout << "NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

/* clang-format on */

// Function to read input array
void read_arr(vector<int>& arr, int len) {
    f(i, 0, len) {
        cin >> arr[i]; // Read elements into the vector
    }
}

// Function to initialize the prefix sum map
void init_prefix(unordered_map<long long, int>& pre_map) {
    pre_map[0] = 1; // Initialize to handle case where the prefix sum is 0 at the start 
}

// Function to calculate beautiful segments using prefix sums
int calc_segments(const vector<int>& arr, int len) {
    unordered_map<long long, int> pre_map; // Map to store prefix sum indices 
    init_prefix(pre_map); // Initialize the prefix map
    
    long long pre_sum = 0; 
    int seg_count = 0; // Counter for beautiful segments

    // Calculate prefix sums and count beautiful segments
    f(i, 0, len) {
        pre_sum += arr[i]; // Update prefix sum 
        if (pre_map[pre_sum]) { 
            // If the prefix sum is already in the map, we have found a beautiful segment 
            seg_count++; 
            pre_map.clear(); // Reset the map for non-overlapping segments 
            init_prefix(pre_map); // Re-initialize for the next segment 
            pre_sum = 0; // Reset the prefix sum 
        } 
        pre_map[pre_sum]++; // Add/update the prefix sum in the map 
    }
    
    return seg_count; // Return the count of beautiful segments
}

void process_case() {
    int len; // Number of elements
    cin >> len; // Read the number of elements
    vector<int> arr(len); // Initialize vector to hold the elements
    read_arr(arr, len); // Call function to read the array

    int result = calc_segments(arr, len); // Call function to count beautiful segments
    cout << result << endl; // Output result for the test case 
}

void solve() {
    int t; // Number of test cases
    cin >> t; // Read number of test cases
    while (t--) {
        process_case(); // Process each test case
    } 
}

int main() { 
    ios::sync_with_stdio(false); // Fast input/output
    cin.tie(0); // Untie cin from cout for faster execution
    solve(); // Call the solve function
    return 0; 
}
