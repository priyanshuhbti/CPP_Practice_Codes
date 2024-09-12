#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,a;
    cin>>n>>m>>a;
    // cout<<((n*m) %(a*a))<<endl;
    long long res =0;
    res +=(ceil(1.0 * n/a)* ceil(1.0*m/a));
    cout<<res<<endl;
    //Ceil is important and doing alg alg .is also very important ..
        

    return 0;
}