#include <iostream>
#include <cmath>
using namespace std;


int findLongestGoodArray(int l, int r) {
    long long delta = r - l;
 
    long long k = sqrt(2 * delta); 
    
  
    while (k * (k + 1) / 2 <= delta) {
        k++;
    }
    return k;
}

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        
      
        if (l == r) {
            cout << 1 << endl;
            continue;
        }
        
      
        cout << findLongestGoodArray(l, r) << endl;
    }
    return 0;
}
