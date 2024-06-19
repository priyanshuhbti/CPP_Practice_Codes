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
        


        int n;
        cin>>n;
        int a[n];
        int cnt =0 ,ans =0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==0){
                cnt++;

            }
            else{
                ans=max(ans,cnt);
                cnt=0;

            }

            
        }
        cout<<max(ans,cnt)<<endl;


    }
    return 0;
}