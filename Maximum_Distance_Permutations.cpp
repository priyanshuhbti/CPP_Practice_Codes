#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tcn;
    cin >> tcn;
    
    for (int tcn = 0; tcn < tcn; ++tcn) {
        int n;
        cin >> n;
        
        vector<int> l(n);
        
        // Fill l with 1 to n
        for (int i = 0; i < n; ++i) {
            l[i] = i + 1;
        }
        
        // Print the ascending permutation
        for (int i = 0; i < n; ++i) {
            cout << l[i] << " ";
        }
        cout << endl;
        
        // Generate the rotated permutation
        vector<int> rotated_l(n);
        int half = (n + 1) / 2;
        
        // Copy the second half
        for (int i = 0; i < n - half; ++i) {
            rotated_l[i] = l[half + i];
        }
        
        // Copy the first half
        for (int i = 0; i < half; ++i) {
            rotated_l[n - half + i] = l[i];
        }
        
        // Print the rotated permutation
        for (int i = 0; i < n; ++i) {
            cout << rotated_l[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
