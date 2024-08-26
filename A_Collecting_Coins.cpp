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
        
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        // int x=2*c-b-a;
        // if(n<x){
        //     cout<<"NO"<<endl;

        // }else{
        //     if((n-x) % 3==0){
        //         cout<<"YES"<<endl;

        //     }else{
        //         cout<<"NO"<<endl;

        //     }
        // }
        int total=a+b+c+n;
        if(total % 3 !=0){
            cout<<"NO"<<endl;

        }else{
            if(a>total/3 || b>total/3 || c>total/3){
                cout<<"NO"<<endl;

            }else{
                cout<<"YES"<<endl;
                
            }
        }

    }
    return 0;
}