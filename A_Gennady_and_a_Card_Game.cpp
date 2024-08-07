#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    string s;
    cin>>s;
    bool yes=false;

    for(int i=0; i<5; i++){
        string str;
        cin>>str;
        if(str[0]==s[0] || str[1]==s[0] || str[0]==s[1] || str[1]==s[1]){
               yes=true;

            break;

        }


    }
    if(yes){
        cout<<"YES"<<endl;

    }else{
        cout<<"NO"<<endl;
        
    }
    return 0;
}