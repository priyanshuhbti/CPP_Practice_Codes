#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0); cin.sync_with_stdio(0);
    cout.tie(0); cout.sync_with_stdio(0);
    string s;
    cin >> s;
    for(auto digit:s ){
        if(digit>'4'){
            digit= '9'- digit +'0';

        }
    }
         if(s.front()=='0'){
        s.front()='9';
        
     }   
     cout<<s<<endl;

    return 0;
}
