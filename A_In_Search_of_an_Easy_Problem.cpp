#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0); cin.sync_with_stdio(0);
    cout.tie(0); cout.sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> vec(n);
    bool yes = false;  // Initialize the 'yes' variable

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        if (vec[i] == 1) {
            yes = true;
        }
    }

    if (yes) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}
