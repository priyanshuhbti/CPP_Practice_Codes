#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        
        int n;
        cin>>n;
        int s1=0, s2=0, s3=0;

        while(n--){
            int a,b,c;
            cin>>a>>b>>c;
            s1 +=a; s2 +=b; s3 +=c;

        }
        if(s1==0 && s2==0 && s3==0){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }

    return 0;
}