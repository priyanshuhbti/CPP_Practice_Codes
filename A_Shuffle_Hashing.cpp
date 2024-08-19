#include<bits/stdc++.h>
using namespace std;
bool solve(){
    string s,h;
    cin>>s;
    cin>>h;
    int m=s.size(),n=h.size();
    if(n<m) return false;
    sort(s.begin(),s.end());
    for(int i=0;i<n-m+1;i++){
        string p=h.substr(i,m);
        sort(p.begin(),p.end());
        if(p==s) return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}