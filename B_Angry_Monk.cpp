#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int minimum_operations(int n, int k, vector<int>& pieces) {
    // Priority queue to simulate a max-heap
    priority_queue<int> max_heap;
    for (int piece : pieces) {
        max_heap.push(piece);
    }

    int operations = 0;

    while (max_heap.size() > 1) {
        // Get the largest piece
        int largest_piece = max_heap.top();
        max_heap.pop();

        if (largest_piece == 1) {
            break;
        }

        // Divide the largest piece into two pieces: 1 and largest_piece - 1
        max_heap.push(1);
        max_heap.push(largest_piece - 1);
        operations++;

        // Try to merge the largest piece with the smallest piece (which will always be 1)
        while (max_heap.size() > 1 && max_heap.top() == 1) {
            max_heap.pop(); // Remove the 1
            int next_piece = max_heap.top();
            max_heap.pop(); // Get the next largest piece
            int new_piece = next_piece + 1;
            max_heap.push(new_piece);
            operations++;
        }
    }

    return operations;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        vector<int> pieces(k);
        for (int j = 0; j < k; ++j) {
            cin >> pieces[j];
        }
        results[i] = minimum_operations(n, k, pieces);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
