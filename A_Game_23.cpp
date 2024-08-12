#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void err(){
    cout<<"-1"<<endl;
    exit(0);

}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
     
    int ans=0;
    if(m % n) err();
    m /=n;


// yhi mistake ho rhi thi...
      while(m % 2 ==0) m /=2 ,ans++ ;
    while(m % 3==0) m /= 3 ,ans++ ;
 
   if(m !=1) err();

   cout<<ans<<endl;



    return 0;
}