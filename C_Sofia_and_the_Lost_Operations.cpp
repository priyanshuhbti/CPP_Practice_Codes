#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

#define int long long
typedef pair<int, int> Pair;
typedef vector<Pair> VectorPair;
typedef vector<int> VectorInt;
typedef vector<VectorInt> VectorVectorInt;

void processTestCase() {
    int size;
    cin >> size;
    
    VectorInt initialArray(size);
    for (int i = 0; i < size; ++i) {
        cin >> initialArray[i];
    }
    
    VectorInt targetArray(size);
    set<int> targetSet;
    for (int i = 0; i < size; ++i) {
        cin >> targetArray[i];
        targetSet.insert(targetArray[i]);
    }
    
    multiset<int> differences;
    for (int i = 0; i < size; ++i) {
        if (initialArray[i] != targetArray[i]) {
            differences.insert(targetArray[i]);
        }
    }

    int availableChanges;
    cin >> availableChanges;
    bool allChangesApplied = false;
    
    for (int i = 0; i < availableChanges; ++i) {
        int change;
        cin >> change;
        
        if (differences.find(change) != differences.end()) {
            differences.erase(differences.find(change));
            if (i == availableChanges - 1)
                allChangesApplied = true;
        } else if (targetSet.count(change)) {
            if (i == availableChanges - 1)
                allChangesApplied = true;
        }
    }

    if (allChangesApplied && differences.empty()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;
    for (int test = 1; test <= testCases; test++) {
        processTestCase();
    }
    return 0;
}
