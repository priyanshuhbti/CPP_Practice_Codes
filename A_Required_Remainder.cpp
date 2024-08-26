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
        int x,y,n;
        cin>>x>>y>>n;
        int rem=n%x;
        int change = (rem-y+x)%x;
        n -=change;
        cout<<n<<endl;
        
    }
    return 0;
}