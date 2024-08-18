#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;


int main() {
    int T;
    cin >> T;
    
    int n;
    string s;
    forn(_, T){
        cin >> n >> s;
        bool ok = true;
        forn(i, n){
            int k = abs(s[i] - s[n - i - 1]);
            if (k > 2 || k % 2 == 1){
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}