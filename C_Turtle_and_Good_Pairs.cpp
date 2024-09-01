#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string str;
        int a=0, b=n-1;
        cin>>str;
        sort(str.begin(), str.end());
        
        while(a<=b){
            if(n%2  && a==b){
                cout<<str[a];
                
                break;
            }else{
                cout<<str[a]<<str[b];
                a++; b--;
            }
        }
            cout<<endl;
        
    }
    return 0;
}