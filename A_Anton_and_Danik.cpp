#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    long long a=0, d=0;

    // string str;
    // cin>>str;
    //Instead of string make it string ..
    char c;
    while ((n--))
    {
        cin>>c;
        c=='A'? a++:d++;

    }
    cout<<(a>d ? "Anton" : a<d ? "Danik":"Friendship");

    

    return 0;
}