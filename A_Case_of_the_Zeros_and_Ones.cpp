#include <bits/stdc++.h>
using namespace std;
int main()
{
      
        int n;string s;
        cin>>n>>s;
        int one=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            one++;
        }
        cout<<(abs((n-one)-one))<<endl;
    
}