#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        
        if(s.size() >= 3 && s[0] == '1' && s[1] == '0') {
            
            
            if(s[2] >= '2' || (s.size() >= 4 && s[2] == '1')) {
                cout << "YES" << '\n';
                continue;
            }
        }

        cout << "NO" << '\n';
    }

    return 0;
}
