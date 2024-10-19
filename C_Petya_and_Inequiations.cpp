#include <bits/stdc++.h>
#define int long long
using namespace std;

const int inf = 1e18 + 7;
const int N = 5e5 + 11;
pair < int, int > a[N];

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, x, y;
    cin >> n >> x >> y;
    
    y -= n - 1;
    int sum = y * y + n - 1;
    if(sum < x || y < n){
        cout << -1;
        return 0;
    }
    for(int i = 1; i < n; i++) cout << 1 << '\n';
    cout << y;
}