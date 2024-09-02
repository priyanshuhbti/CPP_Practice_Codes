#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

bool isBeautifulSquareMatrix(string &s, int n) {
    int m = sqrt(n); // Calculate the side length of the matrix

    // Check the internal matrix (non-boundary elements)
    for (int i = 1; i < m - 1; ++i) {        // Start from row 1 to m-2 (excluding edges)
        for (int j = 1; j < m - 1; ++j) {    // Start from column 1 to m-2 (excluding edges)
            int index = i * m + j;           // Calculate the 1D index in the string
            if (s[index] != '0') {
                return false; // If any internal element is not zero, it's not a beautiful matrix
            }
        }
    }
    return true; // If all internal elements are zero, it's a beautiful matrix
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        string s;
        cin >> n;   // Read the length of the string
        cin >> s;   // Read the string representing the matrix

        // Check if n is a perfect square
        if (!isPerfectSquare(n)) {
            cout << "No" << endl;
            continue;
        }

        // Check if the matrix is beautiful
        if (isBeautifulSquareMatrix(s, n)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
