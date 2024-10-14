#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long x, y;
        cin >> x >> y;

        if (n == 0) {
            cout << 0 << endl;
            continue;
        }

        long long effective_processing_rate = min(x, y);
        long long time_required = (n + effective_processing_rate - 1) / effective_processing_rate;
        cout << time_required << endl;
    }

    return 0;
}