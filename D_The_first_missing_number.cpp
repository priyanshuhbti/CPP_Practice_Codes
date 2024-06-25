#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> vec(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> vec[i];
    }
    vector<int> op(n + 2, 0);  
    while (q--) {
        int l, r, val;
        cin >> l >> r >> val;

        op[l] += val;
        op[r + 1] -= val;
    }

    
    for (int i = 1; i <= n; i++) {
        op[i] += op[i - 1];
    }

    
    for (int i = 1; i <= n; i++) {
        vec[i] += op[i];
    }

    
    for (int i = 1; i <= n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
