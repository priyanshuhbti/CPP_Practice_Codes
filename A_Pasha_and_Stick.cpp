#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    if(n&1)cout<<0<<endl;
    else{
        cout<<(n-1)/4<<endl;
        
    }

    return 0;
}