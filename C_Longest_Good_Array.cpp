#include <iostream>
#include <cmath>
using namespace std;

// Function to find the maximum length of the good array
int findLongestGoodArray(int l, int r) {
    long long delta = r - l;
    // Use the formula to find k-1 where (k-1) * k <= 2 * delta
    long long k = sqrt(2 * delta); // Start with an approximation of k
    
    // Adjust k to find the exact maximum value
    while (k * (k + 1) / 2 <= delta) {
        k++;
    }
    // Subtract 1 to get the correct k
    return k;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int l, r;
        cin >> l >> r; // Read l and r
        
        // Special case where l == r
        if (l == r) {
            cout << 1 << endl;
            continue;
        }
        
        // Call the function to find the longest length
        cout << findLongestGoodArray(l, r) << endl;
    }
    return 0;
}
