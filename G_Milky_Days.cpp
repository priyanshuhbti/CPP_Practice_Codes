#include <iostream>
#include <map>
#include <list>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;


void work(){
    int n,m,k;
    cin >> m >> n >> k;

    map<ll,ll> days;
    for (int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        days[a] += b;
    }

    days[1e18] = 0;

    ll curd = 1;
    ll got = 0;  
    ll res = 0;

    list<pll> pq;
    
    for (auto &cur : days){
       while (pq.size() && curd < cur.first){
            auto [d,x] = pq.front();
            pq.pop_front();

            if (d+k-1 < curd) continue;
            else if (d > curd) curd = d, got = 0;

            if (n-got > x) got += x;
            else{
                ll sat = min(curd + (x-n+got)/n + 1,min(d + k, cur.first));
                ll newx = x-(sat-curd)*n+got;
                if (newx) pq.push_front({d,newx});
                res += sat-curd;
                got = 0;
                curd = sat;
            } 
        }
        pq.push_front(cur);
    }
    
    cout << res << '\n';
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--) work();

    return 0;
}