#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, t1, t2;
        cin >> n >> d >> t1 >> t2;
        int dist1 = abs(d - t1);
        int dist2 = abs(d - t2);
        cout << min(dist1, dist2) << endl;
    }
    return 0;
}
