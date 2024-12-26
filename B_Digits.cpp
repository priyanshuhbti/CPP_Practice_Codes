#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        int d;
        cin >> n >> d;

        vector<int> ans;

        ans.push_back(1);

        if (n >= 3 || d % 3 == 0) {
            ans.push_back(3);
        }

        if (d == 5) {
            ans.push_back(5);
        }

        if (n >= 3 || (n == 2 && d == 7)) {
            ans.push_back(7);
        }

        if (n >= 6) {
            ans.push_back(9);
        }
        else if(n>=2){
             long long factorial = 1;
            for(int i = 1; i<=n; ++i){
                factorial*=i;
            }
            if((factorial*d)%9==0){
                ans.push_back(9);
            }
        }

        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        if (!ans.empty()) {
            for (size_t i = 0; i < ans.size(); ++i) {
                cout << ans[i];
                if (i < ans.size() - 1) {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}