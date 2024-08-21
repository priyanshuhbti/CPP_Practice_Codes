#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 1; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        bool check  =true;
        for(int i=0; i<n/2; i++) {
            if(s[i]==s[n-1-i]) continue;
            else if(abs(s[i]-s[n-1-i])==2) continue;
            check = false;
            break;
        }
        cout<<(check?"YES":"NO")<<endl;
       //Coding in the windows notebook ..
       //I do not to setup a webserver , i jsut wnat to study from m ynotebook
        //The Server File Commited...
    }
}