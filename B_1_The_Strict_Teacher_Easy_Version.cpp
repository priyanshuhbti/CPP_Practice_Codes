#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

       
        int teacher1, teacher2;
        cin >> teacher1 >> teacher2;

        int teacher_distance = abs(teacher1 - teacher2);

        while (q--) {
            int david;
            cin >> david;

            int dist1 = abs(teacher1 - david);
            int dist2 = abs(teacher2 - david);

            int avg_dist = (dist1 + dist2 - teacher_distance) / 2;

            cout << max(dist1, avg_dist) << endl;
        }
    }

    return 0;
}
