#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Length of the string
        string s;
        cin >> s; // The string itself

        bool is_good = false;

        // Check if the first and last characters are different
        if (s[0] != s[n - 1]) {
            is_good = true;
        }

        if (is_good) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
