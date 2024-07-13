#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
 int  t;
    cin >> t;
    while (t--) {
        vector<int> vec(3);
        for (int i = 0; i < 3; ++i) {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        int increments = 5;
        while (increments > 0) {
            // Always increment the smallest number
            vec[0]++;
            increments--;

            // Re-sort to find the next smallest number
            sort(vec.begin(), vec.end());
        }

        int multi = vec[0] * vec[1] * vec[2];
        cout << multi << endl;
    }
    return 0;
}
