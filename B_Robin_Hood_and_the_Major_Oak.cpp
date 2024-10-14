#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        // We only need to check if the sum of leaves is even or odd.
        // The number of leaves in year n can be determined by the number of years
        // for which leaves are still present.
        if (k >= n) {
            // If k >= n, all leaves from year 1 to n are present
            long long total_leaves = n * (n + 1) / 2;
            if (total_leaves % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            // If k < n, we need to calculate the sum from (n - k + 1) to n
            long long total_leaves = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
            if (total_leaves % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}