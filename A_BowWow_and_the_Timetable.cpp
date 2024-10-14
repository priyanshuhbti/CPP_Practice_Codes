#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;
    long long n = str.size();
    long long cnt = 0;
    
   
    for (char c : str) {
        if (c == '1') {
            cnt++;
        }
    }
    
    long long res = n / 2;
    
    if (n % 2 == 1 && cnt > 1) {
        res++;
    }
    
    cout << res << endl;

    return 0;
}
