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
        ll n;
        cin>>n;
         vector<int> vec(n);
                for(int i=0; i<n; ++i){
                    cin>>vec[i];        
                }
          vector<int> cnt(26,0);
          string s="";
          for(int i=0; i<n; i++){

            for(int j=0; j<26; j++){
                    if(cnt[j]==vec[i]){
                        cnt[j]++;
                        s+=char(97+j);
                        break;

                    }

            }
          }  
          cout<<s<<endl;
              
    }
    return 0;
}