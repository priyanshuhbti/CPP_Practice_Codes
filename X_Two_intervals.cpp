#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long is = max(l1, l2);
    long long e = min(r1, r2);

    if (is <= e) {
        cout << is << " " << e<< endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}