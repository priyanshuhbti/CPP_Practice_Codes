#include <bits/stdc++.h>
using namespace std;

void solve() {
    int w,h;
    cin>>w>>h;
      int k, first ,last ;
           int p;

    long long  area=0;
    for(int i=0; i<4; i++){
        cin>>k;
        for(int j=0; j<k; j++){
            cin>>p;
              if(j==0) first=p;
              else if(j+1==k) last=p;

        }
        long long base= last -first ;
        if(i<2) area = max(area , base*h);
        else area=max(area,base *w);

    }
    cout<<area<<endl;


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