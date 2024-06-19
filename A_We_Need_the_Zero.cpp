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
        ll n, ans=0;
        cin>>n;
         vector<int> vec(n);
                for(int i=0; i<n; ++i){
                    int a;
                    cin>>a;
                    ans^=a; 
                }


            if(n%2==0){
                if(ans==0){ cout<<"0"<<endl;

                }
               
                else{
                     cout<<-1<<endl;

                }
               
            }    
            else{

                cout<<ans<<endl;

            }
                
        
    }
    return 0;
}