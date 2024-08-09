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
        int x;
        cin>>x;

         int digi= x%10;
         int i=1, sum=0; 
         while(x>0){
            sum=i+sum;
            i++;
            x/= 10;

         }

         cout<<(digi -1)*10 + sum<<endl;

    }
    return 0;
}