#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> ratings(n);
        long long total_sum = 0;
        long long max_rating = 0;

        for (int i = 0; i < n; i++) {
            cin >> ratings[i];
            total_sum += ratings[i];
            if (ratings[i] > max_rating) {
                max_rating = ratings[i];
            }
        }


        // The total damage done to the last remaining fighter
        long long sum_other_ratings = total_sum - max_rating;

        // Final rating of the last fighter
        long long final_rating = max_rating - sum_other_ratings;

        if (final_rating < 0) {
            cout << -1 << endl;
        } else {
            cout << final_rating << endl;
        }
    }

    return 0;
}