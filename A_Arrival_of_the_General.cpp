#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n;
    cin>>n;
    int x=0, y=0;

     vector<int> vec(n);
            for(int i=0; i<n; ++i){
                cin>>vec[i];
                if(vec[i]>vec[x]){
                    x=i;
                }else if(vec[i]<=vec[y]){
                    y=i;
                }
                
            }
          cout<<n-y-1+x-(y<x)<<endl;


    return 0;
}