#include <iostream>
#include <cmath> // For std::ceil

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

       int a= min(n,k);
       int b= min(m,k);
       int res= a*b;
       cout<<res<<endl;
       
    }

    return 0;
}
