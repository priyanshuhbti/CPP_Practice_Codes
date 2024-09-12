#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int zero=0 ,sum=0, even=0;
    for(auto x:s){
        if(x=='0')zero++;
        if((x-'0') % 2==0) even++;
        sum +=(x-'0')

    }
    //We should commit an issue if possible and try to sort as early as possible .
    //If we are working on the module ... then try to work on the codes for the it ..
    
if(zero ==0){
    cout<<"cyan"<<endl;
    return ;

}
even--;
if(sum % 3==0 && even){cout<<"red"<<endl;
}
else{
    cout<<"cyan"<<endl;

}

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}