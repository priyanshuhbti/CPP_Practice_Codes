#include <iostream>
#include <vector>
using namespace std;

int minChunksToSort(int n, vector<int>& cards) {
    int chunks = 0; 
    int max_seen = cards[0]; 

    for (int i = 1; i < n; i++) {
        if (cards[i] < max_seen) {
            chunks++; // Start a new chunk if the current card is smaller than the maximum seen so far
        } else {
            max_seen = cards[i]; // Update max_seen if the current card is greater
        }
    }

    // Increment chunk count by 1 as the last chunk may not be counted
    return chunks + 1;
}

int main() {
    int n;
    cin >> n; 
    vector<int> cards(n);

    for (int i = 0; i < n; i++) {
        cin >> cards[i]; 
    }

    cout << minChunksToSort(n, cards) << endl; // Output the minimum number of chunks needed to sort the cards

    return 0;
}
