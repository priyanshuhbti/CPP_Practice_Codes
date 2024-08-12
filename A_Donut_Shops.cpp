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