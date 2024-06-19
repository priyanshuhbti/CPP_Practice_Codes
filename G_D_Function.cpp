#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute the sum of digits of a number
long long digitSum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to compute the number of valid integers n in the range [10^l, 10^r) 
// that satisfy D(k * n) = k * D(n)
long long countValidNumbers(int l, int r, long long k) {
    long long lower =  pow(10, l);
    long long upper = pow(10, r);
    long long count = 0;

    for (long long n = lower; n < upper; ++n) {
        if (digitSum(k * n) == k * digitSum(n)) {
            ++count;
        }
    }

    return count % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        long long k;
        cin >> l >> r >> k;

        cout << countValidNumbers(l, r, k) << endl;
    }

    return 0;
}
