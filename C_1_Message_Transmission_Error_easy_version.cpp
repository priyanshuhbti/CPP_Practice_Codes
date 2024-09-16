#include <iostream>
#include <string>

using namespace std;

int main() {
    string t;
    cin >> t;
    int n = t.length();

    // Check for possible values of s
    for (int s = 1; s < n / 2 + 1; ++s) {
        // Check if the end of the first part matches the beginning of the second part
        if (t.substr(0, n - s) == t.substr(s, n - s)) {
            cout << "YES\n";
            cout << t.substr(0, n - s) << endl; // Output the original message
            return 0;
        }
    }

    cout << "NO" << endl; // No valid s found
    return 0;
}
