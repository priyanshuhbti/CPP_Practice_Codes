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

        int n,cnt=0;
        cin>>n;
       for(int i=1; i<=n; i++){

        int x;    //Iske Piche ka Logic ye hai ...Ki hmm Even +Even =Even hi rhega isliye hmm bss odd wale ko check kr lete hai ..
        cin>>x;

            if(x%2 !=0) cnt++;//Jo add hai usko pakad kar check kr lo ..total no ..

       }
       if(cnt%2==0)cout<<"YES"<<endl;//And if found even then ..Sbb changa si ..
       else cout<<"NO"<<endl;



    }
    return 0;
}