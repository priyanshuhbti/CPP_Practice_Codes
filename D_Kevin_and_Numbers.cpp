#include <bits/stdc++.h>
using namespace std;

bool canTransform(vector<int>& a, vector<int>& b) {
    // First, check if the sums are equal
    long long sumA = accumulate(a.begin(), a.end(), 0LL);
    long long sumB = accumulate(b.begin(), b.end(), 0LL);
    if (sumA != sumB) return false;

    // Sort b in descending order
    sort(b.begin(), b.end(), greater<int>());

    // Use a max-heap to process elements in a
    priority_queue<int> maxHeap(a.begin(), a.end());

    for (int num : b) {
        // Try to match the largest element in the heap
        if (maxHeap.empty()) return false;

        int largest = maxHeap.top();
        maxHeap.pop();

        if (largest == num) {
            // Exact match, no need to merge
            continue;
        } else if (largest > num) {
            // We need to split or merge elements to match num
            // Since we can only merge elements with |x - y| <= 1,
            // it's impossible to split a larger number into smaller ones.
            return false;
        } else {
            // Merge elements to match num
            int remaining = num - largest;
            if (remaining <= 0 || maxHeap.empty()) return false;

            int nextLargest = maxHeap.top();
            maxHeap.pop();

            // Check if the next largest element can be merged
            if (abs(largest - nextLargest) > 1) return false;

            // Push the merged result back into the heap
            maxHeap.push(largest + nextLargest);
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        if (canTransform(a, b)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}