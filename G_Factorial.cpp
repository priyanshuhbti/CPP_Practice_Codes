#include <bits/stdc++.h>

using namespace std;

 unsigned long long factorial(int n){
    if(n==0){
        return 1;

    }
    unsigned long long result =1;
    for(int i=1; i<=n ; i++){
        result *=i;


    }
    return result;

}

int main(){
    int t;
    cin>>t;
    while(t--){
       
        
            int n;
            cin>>n;
            cout<<factorial(n)<<endl;
            
        
    }

    return 0;

}