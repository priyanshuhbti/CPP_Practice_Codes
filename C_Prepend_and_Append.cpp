#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//Itna Simple Question tha maine isko bahot complicate kr diya ..
int main()
{
    
    int t ;
    cin >> t;
    
    while (t--)
    {
        
        ll n;
        cin >> n;
  string s;
  cin>>s;
  int l=0,r=n-1 ,ans=n;

  while(s[l] != s[r] && ans>0){
      l++;
      r--;
      ans-=2;
      

  }
cout<<ans<<endl;

    }
    return 0;
}
