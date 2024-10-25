#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Read n for this game
        
        int x = 0; // Starting position of the dot
        int move = 1; // First move is of magnitude 1
        bool sakurako_turn = true; // Sakurako starts first
        
        // We simulate the game until |x| exceeds n
        while (true) {
            if (sakurako_turn) {
                // Sakurako moves
                x -= move;
            } else {
                // Kosuke moves
                x += move;
            }
            
            // Check if the game ends
            if (abs(x) > n) {
                if (sakurako_turn) {
                    cout << "Sakurako" << endl;
                } else {
                    cout << "Kosuke" << endl;
                }
                break;
            }
            
            // Alternate turns
            sakurako_turn = !sakurako_turn;
            
            // Move magnitude increases by 2 each time (1, 3, 5, 7, ...)
            move += 2;
        }
    }
    
    return 0;
}
