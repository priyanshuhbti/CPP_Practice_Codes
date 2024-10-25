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

ll min_value(ll a, int b) { return a < b ? a : b; }
ll min_value(int a, ll b) { return a < b ? a : b; }
ll max_value(ll a, int b) { return a > b ? a : b; }
ll max_value(int a, ll b) { return a > b ? a : b; }
ll gcd_value(ll a, ll b) { return b == 0 ? a : gcd_value(b, a % b); }
ll lcm_value(ll a, ll b) { return a / gcd_value(a, b) * b; }
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
void solve() {
    int matrix_size; // Size of the matrix
    cin >> matrix_size; // Input matrix size
    vector<vector<int>> matrix(matrix_size, vector<int>(matrix_size)); // Initialize matrix
    f(row, 0, matrix_size) { // Loop over rows
        f(col, 0, matrix_size) { // Loop over columns
            cin >> matrix[row][col]; // Input each element of the matrix
        }
    }
    
    ll total_applications = 0; // Initialize the count of applications needed

    f(row, 0, matrix_size) { // Iterate through each row
        f(col, 0, matrix_size) { // Iterate through each column
            if (matrix[row][col] < 0) { // Check for negative values
                int applications_needed = abs(matrix[row][col]); // Calculate applications needed
                total_applications += applications_needed; // Update total applications
                
                // Update the values in the matrix according to the logic
                f(offset, 0, matrix_size) {
                    if (row + offset < matrix_size && col + offset < matrix_size) { 
                        matrix[row + offset][col + offset] += applications_needed; // Apply adjustments
                    }
                }
            }
        }
    }
    
    cout << total_applications << endl; // Output the total applications needed
}

int main() {
    ios_base::sync_with_stdio(0); // Optimizes the input/output operations
    cin.tie(0); // Unties cin from cout
    cout.tie(0); // Unties cout from cin
    
    ll test_cases; // Number of test cases
    cin >> test_cases; // Input number of test cases
    while (test_cases--) { // Process each test case
        solve(); // Call the solve function for each test case
    }
    return 0;
}
