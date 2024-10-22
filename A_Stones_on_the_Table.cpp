#include <bits/stdc++.h>
using namespace std;
 
int main (){
int f=0,i=0;
string s;
cin>>f>>s;
while (f--){
    if(s[f]==s[f-1])i++;
}
cout<<i;
}
