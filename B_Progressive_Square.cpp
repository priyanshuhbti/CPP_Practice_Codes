#include <bits/stdc++.h>
using namespace std;

void decode() {
    int dimensions;
    long long increment1, increment2;
    cin >> dimensions >> increment1 >> increment2;

    long long minimum = LLONG_MAX;
    map<long long, int> freq_map;

    for (int i = 0; i < dimensions * dimensions; i++) {
        long long num;
        cin >> num;
        minimum = min(minimum, num);
        freq_map[num]++;
    }

    long long current_position = minimum, current_move;
    for (int i = 0; i < dimensions; i++) {
        current_position = minimum + i * increment1;
        current_move = current_position;
        if (!freq_map[current_move]) {
            cout << "NO\n";
            return;
        }
        for (int j = 0; j < dimensions; j++) {
            current_move = current_position + j * increment2;
            if (!freq_map[current_move]) {
                cout << "NO\n";
                return;
            }
            freq_map[current_move]--;
        }
    }

    cout << "YES\n";
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        decode();
    }
    return 0;
}
