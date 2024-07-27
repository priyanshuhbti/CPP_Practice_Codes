#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int k,n,w;
    cin>>k>>n>>w;
   int sum=0; 
   for(int i=1; i<=w; i++){
       sum=sum+i*k;
   }
  int tut= sum-n;
  if(tut>0){
    cout<<tut<<endl;

  }else{
    cout<<"0"<<endl;
    
  }
    return 0;
}