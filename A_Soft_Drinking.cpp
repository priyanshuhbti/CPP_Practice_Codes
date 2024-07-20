#include<bits/stdc++.h>
using namespace std;


/*
 ### Try to write the clean code , just like this .. ###
#include <iostream>
using namespace std;int main(){int a,b,c,d,e,f,g,i;cin>>a>>b>>c>>d>>e>>f>>g>>i;cout<<min(b*c/g,min(d*e,f/i))/a;}



*/
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toast =(k*l)/nl;
    int limes =(c*d);
    int salt = p/np;
    int name=min(toast, limes);
     cout<<min(name,salt)/n;

    return 0;
}