#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin>>str;
     int cnt =str.length();
     if(cnt==0){
        cout<<(1 ? "YES":"NO");
     }else{
             
             cout<<(cnt)/2<<endl;

     }

    return 0;
}