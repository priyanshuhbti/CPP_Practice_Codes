#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int qi = 0; qi < t; qi++) {
        int a, b, m;
        cin >> a >> b >> m;
        int ans = m / a + m / b + 2;
        cout << ans << endl;
    }
    return 0;
}
