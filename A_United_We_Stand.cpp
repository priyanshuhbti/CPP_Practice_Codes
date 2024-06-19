#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cout.tie(0); cout.sync_with_stdio(0);

    int test_cases = 1;
    cin >> test_cases;

    while (test_cases--) {
        int n, p, q;
        cin >> n >> p >> q;

        vector<int> result;
        p--;

        if (p >= 30) {
            cout << "NO" << endl;
            continue;
        }

        int mi = 1 << p;
        if (q >= mi) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
