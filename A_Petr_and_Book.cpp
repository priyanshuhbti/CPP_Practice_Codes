#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    
     int n;
     cin>>n;
      vector<int> vec(7);
             for(int i=0; i<7; ++i){
                 cin>>vec[i];
                 
     
             }
             int cnt =0,sum=0;
    //    for(int i=0; i<7; i++){
    //     sum += vec[i];
    //     cnt++;

    //    }
    int i=0;
    while(sum < n){

      
        sum=sum+ vec[i];
        i++;
         if(i == 7) i = 0;
    }
        cout << (i == 0 ? 7 : i) << endl;

    return 0;
}