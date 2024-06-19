#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int fav_value = a[f - 1]; // Dmitry's favorite cube value
        
        // Sort the array in non-increasing order
        sort(a.rbegin(), a.rend());
        
        // Check the position of the favorite cube's value
        int count_fav_value = count(a.begin(), a.end(), fav_value);
        int count_in_top_k = count(a.begin(), a.begin() + k, fav_value);
        
        if (count_in_top_k == count_fav_value) {
            cout << "YES" << endl; // Always removed
        } else if (count_in_top_k == 0) {
            cout << "NO" << endl; // Never removed
        } else {
            cout << "MAYBE" << endl; // Depends on the sorting order
        }
    }

    return 0;
}
