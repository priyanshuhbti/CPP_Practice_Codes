#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> find_minimum_total_distance(int t, vector<vector<int>>& test_cases) {
    vector<int> results;
    for (const auto& case_ : test_cases) {
        vector<int> sorted_case = case_;
        sort(sorted_case.begin(), sorted_case.end());
        int x1 = sorted_case[0], x2 = sorted_case[1], x3 = sorted_case[2];
        int median = x2;  // median of three sorted numbers is the second one
        int total_distance = abs(median - x1) + abs(median - x2) + abs(median - x3);
        results.push_back(total_distance);
    }
    return results;
}

int main() {
    int t;
    cin >> t;
    vector<vector<int>> test_cases(t, vector<int>(3));
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i][0] >> test_cases[i][1] >> test_cases[i][2];
    }

    vector<int> results = find_minimum_total_distance(t, test_cases);
    for (const int& result : results) {
        cout << result << endl;
    }

    return 0;
}
