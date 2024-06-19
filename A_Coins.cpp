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
        
        ll n,k;
        cin>>n,k;
       

        if(n%2==0)
        cout<<"YES"<<endl;

        else{
            if(k%2  !=0)
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }
    return 0;
}