#include <iostream>
using namespace std;

void solve() {
    long long n, usual_price, modified_price;
    cin >> n >> usual_price >> modified_price;

    // If the modified price is less than the usual price, sell all buns at usual price.
    if (modified_price < usual_price) {
        cout << n * usual_price << endl;
    } else {
        // Calculate how many buns we can sell at modified prices (limited by n and modified_price - usual_price).
        long long num_modified_buns = min(n, modified_price - usual_price);
        // Remaining buns sold at usual price.
        long long num_usual_buns = n - num_modified_buns;
        // Calculate the sum of the first num_modified_buns modified prices using arithmetic series formula.
        long long last_modified_price = modified_price - num_modified_buns;
        long long max_profit = num_usual_buns * usual_price + (modified_price * (modified_price + 1) / 2) - (last_modified_price * (last_modified_price + 1) / 2);

        cout << max_profit << endl;
    }

    return;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
