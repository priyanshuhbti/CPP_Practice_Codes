#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        // Calculate the total number of integers in the range
        int totalNumbers = r - l + 1;

        // The maximum number of operations is simply the number of triplets we can form
        int operations = totalNumbers / 3;

        cout << operations << endl;
    }

    return 0;
}
