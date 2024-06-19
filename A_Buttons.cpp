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
        int a,b,c;
        cin>>a>>b>>c;

        int sum=a+b+c;
     if(sum % 2==0){
        if(a>b){cout<<"First"<<endl;}
        else{cout<<"Second"<<endl;
        }

     }
     else{
         if(b>a){
            cout<<"Second"<<endl;

         }
         else{cout<<"First"<<endl;}
        

     }
    }
    return 0;
}