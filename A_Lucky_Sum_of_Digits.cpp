#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    
    int n;
    cin>>n;
    string s;

    //It was a pretty easy problem for me ..
    while(n>0){
        if(n % 7==0){
            s +='7'; n=n-7;

        }
        else{
            s+='4'; n=n-4;

        }
    }

    if(n) cout<<-1<<endl;
    else cout<<s<<endl;
    
    return 0;
}