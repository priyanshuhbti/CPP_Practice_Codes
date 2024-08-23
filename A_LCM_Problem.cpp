#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int l ,r;
        cin>>l>>r;
        int y=2*l;
        if(y<=r){
            cout<<l<<" "<<r<<endl;

        }else{
            cout<<-1<<" "<<-1<<endl;
            
        }
        
    }
    return 0;
}
