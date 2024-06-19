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
        int x,k;
        cin>>x>>k;
        
        if(x % k !=0){
            cout<<"1"<<endl;
            cout<<x<<endl;

        }
        else{
            cout<<"2"<<endl;
            cout<<1<<" "<<(x-1)<<endl;

        }
        

        


    }
    return 0;
}