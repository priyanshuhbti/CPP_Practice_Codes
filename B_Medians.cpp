#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

#define f(i, s, e) for (long long i = s; i < e; i++)
#define yes() { cout << "YES\n"; }
#define no() { cout << "NO\n"; }

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        vi a(n), b(n);
        f(i, 0, n) cin >> a[i];
        f(i, 0, n) cin >> b[i];

        ll ma = -1, mb = -1, mi = -1;
        ll sma = -1, smb = -1, smi = -1;

        f(i, 0, n) {
            if (a[i] > ma) {
                sma = ma;
                smb = mb;
                ma = a[i];
                mb = b[i];
                mi = i;
            } else if (a[i] > sma) {
                sma = a[i];
                smb = b[i];
                smi = i;
            }
        }

        bool o1 = max(ma, mb) > max(sma, smb);
        bool o2 = false;
        f(i, 0, n) {
            if (i == mi) continue;
            if (b[i] > max(ma, mb)) {
                o2 = true;
                break;
            }
        }

        if(o1 || o2) {yes();}
        else cout<<"NO"<<endl;

    }
    return 0;
}
