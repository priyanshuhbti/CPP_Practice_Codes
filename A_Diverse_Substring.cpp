#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    for (int i = 0; i < n - 1; i++) { 
        if (s[i] != s[i+1]) {
            cout << "YES" << endl;
            cout << s[i] << s[i+1] << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
