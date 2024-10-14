#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
  //BruteForces Questions only ..
    int a,b,s;
    cin>>a>>b>>s;

    //extra calculate krna hai ...
    // if extra is negative or extra is odd then no;
    int extra = s- abs(a)-abs(b);
    if(extra<0 || extra&1){
        cout<<"No"<<endl;

    }else{
        cout<<"Yes"<<endl;

    }     
    return 0;
}