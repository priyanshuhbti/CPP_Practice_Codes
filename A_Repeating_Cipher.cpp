//For Coding Codeforces and DSA .. the windows is the best os ...
//Ubntu is only for the servers and all the ...

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n;
    cin>>n;
    string str;
    cin>>str;
    int len =1;
    string ans=" ";
    int i=0;
    while(i<n){
       ans.push_back(str[i]);
        i +=(len++);
    }
    cout<<ans<<endl;

    return 0;
}