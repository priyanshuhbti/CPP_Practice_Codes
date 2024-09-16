#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    string vowels = "aeiou"; // Define the vowels to use
    while (t--) {
        int n;
        cin >> n; // Read the size of the string for this test case
        
        // Create the result string by repeating vowels
        string result;
        for (int i = 0; i < n; ++i) {
            result += vowels[i % 5]; // Use modulo to cycle through vowels
        }
        
        cout << result << endl; // Output the generated string
    }
    return 0;
}
