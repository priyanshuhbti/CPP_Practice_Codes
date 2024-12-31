#include <iostream>
#include <vector>

using namespace std;
//Making basics strong for the cp..

using ll = long long;
using vll = vector<ll>;

int main() {
    ll e{}, o{}, p{}, neg{};

    ll n;
    cin >> n;

    vll vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];

        if (vec[i] == 0) {
            e++;
        } else if (vec[i] > 0) {
            p++;
            if (vec[i] % 2 == 0) { 
                e++;
            } else {
                o++;
            }
        } else { 
            neg++;
            if (vec[i] % 2 == 0) {
                e++;
            } else {
                o++;
            }
        }
    }

    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}