#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a ,b;
    int n,m,k,d;

       cin>>a>>b;
  if(a.size()>b.size())swap(a,b);
  n=a.size(),m=b.size();
  int lcm=(n*m)/__gcd(m,n);
  string aa="",bb="";
  for(int i=1;i<=lcm/n;i++){
    aa+=a;
  }
  for(int i=1;i<=lcm/m;i++)bb+=b;
  if(aa==bb){
    cout<<aa<<"\n";
  }
  else cout<<-1<<"\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
        
    }

    return 0;
}