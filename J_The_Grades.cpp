#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    
    for (int i = 0; i < n; i++) {
        string s;
        int a, b, c, d;
        cin >> s >> a >> b >> c >> d;
        int sum = a + b + c + d;
        m[s] = sum;
    }

    // Optional: print the map to check the results
    for (const auto& pair : m) {
        cout << pair.first << " " << pair.second << endl;
    }
    
    return 0;
}
