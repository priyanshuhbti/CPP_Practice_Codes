#include <bits/stdc++.h>
using namespace std;

// BruteForce Technique
// Greedy can't be implemented here

void solve() {
    int x, y;
    cin >> x >> y;
    
   if(x>3){
    cout<<"YES"<<endl;

   }else if(x==1){
    cout<<(y==1 ? "YES":"NO")<<endl;

   }
   else ( cout<<(y<=3 ? "YES":"NO"))<<endl;

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
