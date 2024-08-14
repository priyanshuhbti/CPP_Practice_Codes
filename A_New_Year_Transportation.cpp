#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);

    int n,t;
    cin>>n>>t;
    vector<int> vec(n);

 for(int i=0; i<n-1; i++){
    cin>>vec[i];

 }
 int curr=1;
 while(curr<t){
    curr =curr+vec[curr-1];

 }
 if(curr==t){

    cout<<"YES"<<endl;

 }else{
    cout<<"NO"<<endl;
    
 }
    return 0;
}