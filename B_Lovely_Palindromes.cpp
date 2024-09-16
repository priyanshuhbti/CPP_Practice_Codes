#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Just 10 min think after that just see soln and try ..

    //Reversing the string to find the palindromic number..
     
     string str;
     cin>>str;
     string ans=str;
     reverse(str.begin(),str.end());
     cout<<ans+ str<<endl;
     
    

    return 0;
}