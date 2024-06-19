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

         vector<int> vec;
                for(int i=0; i<n; ++i){
                    int a;
                    cin>>a;
                    vec.push_back(a);


                    if(vec[i+1]>vec[i]){
                        vec[i]=vec[i]+1;
                        vec[i+1]=vec[i+1]-1;
                        cnt++;



                    }   
                    else{
                        break;
                        
                    } 
                    cout<<cnt<<endl;                
        
                }
   


    }
    return 0;
}