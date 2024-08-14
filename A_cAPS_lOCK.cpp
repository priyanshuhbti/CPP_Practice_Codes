
//     //Basic DSA Acche se aa gya hai ..ye tou hai hi ..
//     //Bss aab Advance DSA Should be Covered by me ..
//Saath me rhne se hi kaam hoga ==>Jsut like Raj ..
//Like result aae Priyanshu&------Yadav Slected in the Flipkart SDE Internship
//Or GATE AIR 34 Priyanshu and GATE AIR 56 ........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
   for(int i=1;i<s.size();i++)
   {
    if(s[i]<65 || s[i]>90 )
     {
     cout<<s<<endl;
     return 0;
     }
   }

for (int i=0;i<s.size();i++)
{
    if(s[i]>=97 && s[i]<=122)
    s[i]-=32;
    else
    s[i]+=32;
}
 cout<<s<<endl;
   return 0;
   }

   