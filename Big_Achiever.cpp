#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            bool happy = true;
            for (int j = 0; j < i; ++j) {
                if (a[i] <= a[j]) {
                    happy = false;
                    break;
                }
            }
            cout << (happy ? 1 : 0) << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}