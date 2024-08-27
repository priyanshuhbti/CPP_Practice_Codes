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
        //JO OS hai ..chl hai ..thik hai ..you can do with ease ..
        //Bss hard work kr.. faltu ka pareshan mt ho ..
        //My Windows Notebook for doing all stuff with ease ...
        //Linux ==Server 

        int a,b ;
        cin>>a>>b;
        if(a<b) a=2*a;
        else b=2*b;
        
        // a=2*a;
 //Mujhe Square base pr chahiye 
       int area = max(a,b)* max(a,b);
       cout<<area<<endl;



        
    }
    return 0;
}