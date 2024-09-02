#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int a, b;
        cin >> a >> b; // Input the number of 1s and 2s

        // Check if the sum is even
        if ((a + 2 * b) % 2 != 0) {
            cout << "NO" << endl;
        } 
        // Check if it's possible to balance with the number of 2s used
        else if (a < b % 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
