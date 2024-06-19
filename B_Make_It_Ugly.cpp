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
        
        vector<int> vec(n);
        map<int, int> ma;
        
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
            ma[vec[i]]++;
        }
        
        int ans = 0;
        for (int i = 1; i < n - 1; ++i) {
            if (vec[i - 1] == vec[i + 1] && vec[i] != vec[i - 1]) {
                int j = i;
                while (j < n && vec[j] == vec[i]) {
                    ++j;
                }
                ans = max(ans, vec[j - i]);
                i = j - 1;
            }
        }
        
        if (ans == 0) {
            cout << "-1\n";
        } else {
            vec.pop_back();
            cout<<vec.back()<<endl;

        }
    }
    
    return 0;
}
