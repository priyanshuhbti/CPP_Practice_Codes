#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n;
    cin>>n;
     vector<int> vec(n);
            for(int i=0; i<n; ++i){
                cin>>vec[i];
                
    
            }
            int cnt=1;
int ans=1;

    for(int i=0; i<n-1; i++){
         if(vec[i]<vec[i+1]){
            cnt++;

         }else{
           ans=max(ans,cnt) ;
           cnt=1;


           
         }
    }        
    cout<<max(cnt,ans)<<endl;

    return 0;
}