#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        map<int, int> counts; // Map to store count of each number
        
        for (int i = 0; i < n; ++i) {
            int card;
            cin >> card;
            counts[card]++;
        }
        
        int min_cards = 0;
        for (auto it = counts.begin(); it != counts.end(); ++it) {
            min_cards += (it->second % k == 0) ? it->second : (it->second / k + 1) * k;
        }
        
        cout << min_cards << endl;
    }
    
    return 0;
}