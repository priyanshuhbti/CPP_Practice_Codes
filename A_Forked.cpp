#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        // Set to store positions of knight that can attack king and queen
        set<pair<int, int>> positions_king, positions_queen;

        // Knight's move offsets
        int dx[] = {a, a, -a, -a, b, b, -b, -b};
        int dy[] = {b, -b, b, -b, a, -a, a, -a};

        // Calculate positions that knight can attack king
        for (int i = 0; i < 8; ++i) {
            int x = xK + dx[i]; // Calculate new x position
            int y = yK + dy[i]; // Calculate new y position
            positions_king.insert({x, y}); // Insert the position into the set
        }

        // Calculate positions that knight can attack queen
        for (int i = 0; i < 8; ++i) {
            int x = xQ + dx[i]; // Calculate new x position
            int y = yQ + dy[i]; // Calculate new y position
            positions_queen.insert({x, y}); // Insert the position into the set
        }

        // Count common positions
        int common_positions = 0;
        for (auto pos : positions_king) { // Iterate through positions that can attack king
            if (positions_queen.count(pos)) { // Check if the position also attacks queen
                common_positions++; // Increment common position count
            }
        }

        cout << common_positions << endl; // Output the count of common positions
    }

    return 0;
}
