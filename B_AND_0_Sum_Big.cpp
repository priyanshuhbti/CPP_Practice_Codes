#include<bits/stdc++.h>
using namespace std;
long long int N=1e9+7;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n,k;
        cin>>n>>k;
        long long ans=1;
        for(int i=0;i<k;i++){
            ans=(ans*n)%N;
        }
        cout<<ans%N<<endl;
    }
}
