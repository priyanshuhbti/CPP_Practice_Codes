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
        ll n,a,b;
        cin>>n>>a>>b;
        if(a+b>n){
            if(a==n && b==n)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
            

        }
        else{
            int temp=n-a-b;

            if(temp>1){
                cout<<"Yes"<<endl;

            }
            else{
                cout<<"No"<<endl;

            }
        }
    }
    return 0;
}