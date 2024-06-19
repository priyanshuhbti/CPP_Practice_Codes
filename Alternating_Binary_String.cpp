#include<bits/stdc++.h>
//My name is Priyanshu Yadav and I am a CP Programmer ..
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int sz;
        cin >> sz;
        string txt;
        cin >> txt;
        
        int num = 0;
        
        int state = 0;
        char prev = txt[0];
        
        for (int i = 1; i < sz; i++) {
            char cur = txt[i];
            if (state == 1) {
                if (cur == '1')
                    cur = '0';
                else
                    cur = '1';
            }
            
            if (cur == prev) {
                num++;
                state = 1 - state;
                prev = (cur == '1') ? '0' : '1';
            } else {
                prev = cur;
            }
        }
        
        cout << num << endl;
    }
    
    return 0;
}
