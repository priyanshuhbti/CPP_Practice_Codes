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
        ll flag=0;

         vector<int> vec;
                for(int i=0; i<n; ++i){
                    int a;
                    cin>>a;
                    vec.push_back(a);
                    
        
                }
       for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++){
               if(__gcd(vec[i],vec[j])<=2){
                 flag=1;


               }
           }
       }         
            if(flag==1){
                cout<<"Yes"<<endl;

            }
            else{
                cout<<"No"<<endl;

            }
    }
    return 0;
}