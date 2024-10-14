#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,r;
    cin>>n>>r;
    vector<int> vec(n);
   for(int i=0; i<n; i++){
     cin>>vec[i];

   }
     int sum = accumulate(vec.begin(), vec.end(), 0);
     int vacant = (2*r)- sum;

  int  bad=0;

   for(int i=0; i<n; i++){
     if(vec[i] % 2==1){
       if(vacant>0){
        vacant--;

       }else{
        bad++;
             }

     }
   }
 
     cout<< sum - bad <<endl;

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