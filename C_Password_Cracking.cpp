#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string password = ""; // We'll build the password character by character

        for (int i = 0; i < n; ++i) {
            // Create a test string by appending '0' to the current guessed password
            string test0 = password + '0';
            cout << "? " << test0 << endl;
            cout.flush();
            int response0;
            cin >> response0;

            if (response0 == 1) {
                // '0' is the correct character at this position
                password += '0';
            } else {
                // If '0' is not a correct substring, it must be '1'
                password += '1';
            }
        }

        // Output the guessed password
        cout << "! " << password << endl;
        cout.flush();
    }

    return 0;
}
