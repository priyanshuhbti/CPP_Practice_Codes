#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        // int min_diff = INT_MAX;
        // for (int i = 1; i < 2 * n; ++i) {
        //     min_diff = min(min_diff, vec[i] - vec[i - 1]);
        // }

        // cout << min_diff << endl;
      
               cout<<vec[n] -vec[n-1]<<endl;   
    }
    return 0;
}
