#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n <= 3) {
            cout << 1 << endl;
        } else {
            cout << (long long)pow(2, (long long)(log(n) / log(4))) << endl;
        }
    }
    return 0;
}