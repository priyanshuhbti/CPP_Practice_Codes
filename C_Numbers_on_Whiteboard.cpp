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
        //Main point is whether you use linux or wind11 or mac .. main point is learning ..
        //Learning PostgreSQL ..DSA ..Machine Learning ..
      //
      /* main chezz kya hai ..
      
         ** hardwork with foucs like advanced computer secience dsa psitgre machine ..
         ** personality ..

      */
        ll n;
        cin>>n;
        ll a=n-1; ll b=n;
        cout<<"2"<<endl;

        while(a != 0){
            cout<<a<<" "<<b<<endl;
            b=ceil((a+b)/(double)2) ;
            a--;

        }
          cout<<endl;
          
    }
    return 0;
}