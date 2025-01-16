#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long long maxSubarraySum(const vector<long long>& arr) {
    long long max_so_far = LLONG_MIN, max_ending_here = 0;
    for (long long val : arr) {
        max_ending_here = max(val, max_ending_here + val);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}

long long solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> pos;
    vector<long long> neg;

    for (long long x : a) {
        if (x >= 0) {
            pos.push_back(x);
        } else {
            neg.push_back(x);
        }
    }

    long long min_max_sum = LLONG_MAX;
    do {
        vector<long long> rearranged_a;
        int pos_idx = 0;
        int neg_idx = 0;
        for (long long x : a) {
            if (x >= 0) {
                rearranged_a.push_back(pos[pos_idx++]);
            } else {
                rearranged_a.push_back(neg[neg_idx++]);
            }
        }
        min_max_sum = min(min_max_sum, maxSubarraySum(rearranged_a));
    } while (next_permutation(pos.begin(), pos.end()));

    return min_max_sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}