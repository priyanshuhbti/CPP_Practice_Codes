#include <iostream>
using namespace std;

int min_operations(int n, int k) {
    
    if (n == 1) return 0;
    
    
    return (n - 1) / (k - 1) + ((n - 1) % (k - 1) != 0);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << min_operations(n, k) << endl;
    }


    
    
    return 0;
}
