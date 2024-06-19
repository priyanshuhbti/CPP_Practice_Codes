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
    cin >>n;

   vector<int> vec;
          for(int i=0; i<n; ++i){
              int a;
              cin>>a;
              vec.push_back(a);
              
  
          }

          for(int i=1; i<n; ++i){
            if(vec[i-1]>vec[i]){
                vec.push_back(vec[i]);
                vec.push_back(vec[i]);

            }
            else{
                vec.push_back(vec[i]);

            }
          }



          cout<<vec.size()<<endl;
          for(int i=0; i< vec.size(); ++i){
            cout<<vec[i]<<" ";

          }
          cout<<endl;
          

    }


      
    return 0;
}