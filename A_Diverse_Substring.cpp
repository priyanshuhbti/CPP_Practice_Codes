#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);
	//My linux pc will only used for the programming and deep coding stuff ..
	//It will be never used for learning any ece stuff and doing the small kind of things in the windows 
	//Linux and ubuntu notebook is only for the coding and deep programming. 
	//For learning and other stuuff microprocessor stuff and all use the windows 11 notebook for doing that dont use the 
    
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
