#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    // If k is greater than the total number of cyclic shifts,
    // there is no solution.
    if (k > n) {
        cout << -1 << endl;
        return 0;
    }

    // Create the initial sorted array.
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        a[i] = i + 1;
    }

    // Calculate the number of sorted cyclic shifts.
    // For an array of size n, there are n sorted cyclic shifts.
    // To make some of them unsorted, we need to swap some elements.
    int sorted_shifts = n;

    // Start with the last element and move backward to decide which
    // elements to swap to decrease the number of sorted shifts.
    for (int i = n - 1; i >= 0 && sorted_shifts > k; --i) {
        if (sorted_shifts - 1 >= k) {
            swap(a[i], a[i - 1]); // Swap adjacent elements
            --sorted_shifts; // Decrement the count of sorted shifts
        }
    }

    // Output the resulting array
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
