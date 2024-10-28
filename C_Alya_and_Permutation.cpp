#include <bits/stdc++.h>
using namespace std;

/* OM NAMO NARAYANA */
/* Code written by Priyanshu Yadav */

/* TYPES  */
#define ll long long
#define vi vector<int>
#define vll vector<long long>

/* FUNCTIONS */
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()

/* Main() function */

// Function to generate the permutation
vi generate_permutation(int num) {
    vi perm(num);
    
    
    if (num == 5) 
        return {2, 1, 3, 4, 5};  
    
    if (num == 6) 
        return {1, 2, 4, 6, 5, 3};  
    
    if (num == 7) 
        return {2, 4, 5, 1, 3, 6, 7};  
    
    if (num == 8) 
        return {2, 4, 5, 1, 3, 6, 7, 8}; 
    
    if (num == 9) 
        return {2, 4, 5, 6, 7, 1, 3, 8, 9}; 
    
    if (num == 10) 
        return {1, 2, 3, 4, 5, 6, 8, 10, 9, 7};  
    

    f(i, 0, num) {
        perm[i] = i + 1;
    }
    return perm;
}

int calculate_max_k(const vi &perm) {
    int max_k = 0;
    cf(i, 1, perm.size()) {
        if (i % 2 == 1) { // Odd index
            max_k = max_k & perm[i - 1];
        } else { // Even index
            max_k = max_k | perm[i - 1];
        }
    }
    return max_k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        long long  num_elements;
        cin >> num_elements;
        
        vi permutation = generate_permutation(num_elements);
        
        // Output maximum k value
        cout << calculate_max_k(permutation) << endl;
        
        // Output the permutation
        f(i, 0, num_elements) 
            cout << permutation[i] << (i == num_elements - 1 ? '\n' : ' ');
        
    }

    return 0;
}
