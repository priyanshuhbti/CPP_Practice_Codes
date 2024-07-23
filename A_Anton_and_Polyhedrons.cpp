#include <bits/stdc++.h>
using namespace std;
// another solution pretty cool...
//practice is very important ..
//Time Doesn't Matter much hard work matters .. some people are master ..but caannot solve anything and a 
//newbie is able to solve it..
int main() {
    map <string, int> mp;
    
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    
    int n;
    cin >> n;
    
    int ans = 0;
    while (n--) {
        string s;
        cin >> s;
        ans += mp[s];
    }
    
    cout << ans << '\n';
}