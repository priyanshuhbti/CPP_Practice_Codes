#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        int t1, t2;
        cin >> t1 >> t2;
        int d;
        cin >> d;

        int ans;
        if(d==t1 || d==t2)
        ans = 0;
        else if(d < t1 && d < t2)
        {
            ans = min(t1, t2) - 1;
        }
        else if(d > t1 && d > t2)
        {
            ans = n - max(t1, t2);
        }
        else
        {
            ans = min( abs(t1 - (t1+t2)/2) , abs(t2 - (t1+t2)/2)); 
        }

        cout << ans << endl;
    }
}