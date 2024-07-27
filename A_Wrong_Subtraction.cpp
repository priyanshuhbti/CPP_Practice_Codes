#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
     for(int i=0; i<k; i++){ 
       if(n%10==0){
        n /= 10;
       }else{
        n--;

       }


     }
     cout<<n<<endl;

    return 0;
}