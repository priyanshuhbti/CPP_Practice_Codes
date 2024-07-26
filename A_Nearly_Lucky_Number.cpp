#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//Pratice is the only key to get success in the competitive programming ..

int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);

  int cnt=0;
 long long n;
 cin>>n;
 

while(n!=0){
       if(n%10==7 || n%10==4){
        cnt++;

       }
       n =n/10;

}
if(cnt==4 || cnt==7){
    cout<<"YES"<<endl;

}else{
    cout<<"NO"<<endl;

}
    return 0;
}