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
         vector<int> vec(3);
                for(int i=0; i<3; ++i){
                    cin>>vec[i];
                    
        
                }
        sort(vec.begin(),vec.end());
        if(vec[1] != vec[2]) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<vec[0]<<" "<<vec[0]<<" "<<vec[2]<<endl;
            
        }        
    }
    return 0;
}