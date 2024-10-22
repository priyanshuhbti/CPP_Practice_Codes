#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;
         long long l =b-a;

        long long req = max(l, 0LL);  
        cout << max(a - req, 0LL) << endl;  
    }

    return 0;
}
