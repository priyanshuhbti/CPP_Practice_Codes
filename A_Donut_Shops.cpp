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
        //Always try to use the long long instead of the int ..
        //Long long is always very useful in the point ..
        //Win11 Notebokk when required and while coding shift to the linux ..
        //Linux + Codeforces + CSES Problemsets + IIT Kanpur 
        
        ll a,b,c;
        cin>>a>>b>>c;
        ll f ,s;
        f=s=-1;
        if(a<c)f=1;

        if(b*a>c)s=b;
        cout<<f<<" "<<s<<endl;

    }
    return 0;
}