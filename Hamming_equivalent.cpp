#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int setBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

bool canSort() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    vector<int> sortedP = p;
    sort(sortedP.begin(), sortedP.end());

    vector<int> pBits(n);
    for (int i = 0; i < n; ++i) {
        pBits[i] = setBits(p[i]);
    }
    
    vector<int> sortedPBits(n);
    for(int i=0; i<n; ++i){
        sortedPBits[i] = setBits(sortedP[i]);
    }

    for(int i=0; i<n; ++i){
        if(pBits[i] != sortedPBits[i]) return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        if (canSort()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}