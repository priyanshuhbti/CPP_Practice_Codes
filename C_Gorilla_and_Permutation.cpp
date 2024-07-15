#include <iostream>
#include <vector>

using namespace std;

void constructPermutation(int n, int m, int k) {
    vector<int> permutation;

    // Add numbers from n to k in descending order
    for (int i = n; i >= k; --i) {
        permutation.push_back(i);
    }

    // Add numbers from m+1 to k-1 in ascending order
    for (int i = m + 1; i < k; ++i) {
        permutation.push_back(i);
    }

    // Add numbers from 1 to m in ascending order
    for (int i = 1; i <= m; ++i) {
        permutation.push_back(i);
    }

    // Print the permutation
    for (int i : permutation) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        constructPermutation(n, m, k);
    }

    return 0;
}
