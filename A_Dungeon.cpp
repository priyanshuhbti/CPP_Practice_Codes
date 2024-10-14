#include <bits/stdc++.h>
using namespace std;


//Logics then solve ..
//A-1 ..
//total +1;
//if divisible by 7 ok 

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    // if(a==1 || b==1 || c==1){
    //          cout<<"NO"<<endl;


    // }else{
    //     cout<<"YES"<<endl;

    // }
    // int sum =a+b+c -2;
    //  if(sum % 7 ==0 ){
    //     cout<<"YES"<<endl;

    //  }else{
    //     cout<<"NO"<<endl;
    //  }
    //Logic correct :=>
    //if min (a,b,c) >= a+b+c;
    //and the  a+b+c /9 then good ...
     if ((a + b + c) % 9 != 0) {
    cout << "NO" << endl;
} else {
    int required = (a + b + c) / 9;
    // Check if the smallest number is greater than or equal to the required value
    cout << ((min(a, min(b, c)) >= required) ? "YES" : "NO") << endl;
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