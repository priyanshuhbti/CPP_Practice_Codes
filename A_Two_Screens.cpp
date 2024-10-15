#include <iostream>
#include <string>
using namespace std;

int main() {
    int q;  
    cin >> q;

    while (q--) {
        string s, t;
        cin >> s >> t;

        int n = s.length();
        int m = t.length();
        int cnt = 0;  

        for (int i = 0; i < min(n, m); i++) {
            if (s[i] == t[i]) {
                cnt++; 
            } else {
                break; 
            }
        }

        int ans = (n - cnt) + (m - cnt) + cnt;

        if (cnt != 0) {
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
