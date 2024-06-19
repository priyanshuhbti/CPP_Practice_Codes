#include <iostream>
#include <vector>
using namespace std;

// Custom data types and macros
using int64 = long long;
using vec64 = vector<int64>;
#define MODULUS 1000000007

// Function to read vector input
void readVec(vec64 &v) {
    for (auto &element : v) {
        cin >> element;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 numTests;
    cin >> numTests;

    while (numTests--) {
        int64 numElements;
        cin >> numElements;

        vec64 arrayA(numElements, 0);
        readVec(arrayA);
        vec64 arrayP(numElements, 0);
        readVec(arrayP);

        bool resultFlag = false;
        int64 count = 1;

        // Check condition from start to end
        for (int64 idx = 0; idx < numElements; idx++) {
            if (idx == numElements - 1) break;
            if (arrayA[idx] + arrayP[idx] < arrayA[idx + 1]) {
                count++;
            }
        }

        if (count <= 2) resultFlag = true;
        count = 1;

        // Check condition from end to start
        for (int64 idx = numElements - 1; idx >= 0; idx--) {
            if (idx == 0) break;
            if (arrayA[idx] - arrayP[idx] > arrayA[idx - 1]) {
                count++;
            }
        }

        if (count <= 2) resultFlag = true;

        int64 leftBound = 0;
        for (int64 idx = 0; idx < numElements; idx++) {
            if (arrayA[idx] + arrayP[idx] >= arrayA[idx + 1]) {
                leftBound = idx + 1;
            } else {
                break;
            }
        }

        int64 rightBound = numElements - 1;
        for (int64 idx = numElements - 1; idx >= 0; idx--) {
            if (arrayA[idx] - arrayP[idx] <= arrayA[idx - 1]) {
                rightBound = idx - 1;
            } else {
                break;
            }
        }

        if (leftBound + 1 >= rightBound) resultFlag = true;

        // Intermediate checks from start to end
        for (int64 idx = 1; idx < numElements; idx++) {
            if (arrayA[idx] - arrayP[idx] > arrayA[idx - 1]) {
                for (int64 j = idx; j < numElements; j++) {
                    if (j == numElements - 1) resultFlag = true;
                    if (arrayA[j] + arrayP[j] < arrayA[j + 1]) {
                        break;
                    }
                }
                break;
            }
        }

        if (resultFlag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
