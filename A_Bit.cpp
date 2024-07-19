#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]>(9-s[i])){
            s[i]==(9-s[i]);

        }
    }
    cout<<s<<endl;
    

    return 0;
}