#include "bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=(a); i<(b); ++i)
#define all(x) x.begin(),x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;

int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vi a(n);
    rep(i,0,n) cin >> a[i];
    int lo=0, hi = m;
    while(lo<hi){
        int mid = (lo+hi)/2,last=0;
        bool good = 1;
        for (int i=0; i<n and good; ++i){
            if (a[i] + mid < m){
                if (a[i] + mid < last) good = 0; //negative ho gya
                else last = max(last, a[i]); //last update kr diya 
            }else if (a[i]+mid-m < last) last = max(last, a[i]);
        }
        if (good) hi = mid;
        else lo = mid+1;
    }
    cout << lo << '\n';
}