#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
    int a,b,cnt=0;
    cin>>a>>b;
    
    while(a<=b){
        // a =a+3*a;
        // b *=b +2*b;
        a=3*a;
        b=2*b;

        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}

