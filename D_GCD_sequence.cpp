#include <iostream>
#include <vector>
using namespace std;

// Function to compute the greatest common divisor (GCD)
int calculateGCD(int x, int y) {
    if (y == 0) {
        return x;
    }
    return calculateGCD(y, x % y);
}

int main() {
    int numberOfTestCases;
    cin >> numberOfTestCases; // Read number of test cases
    for (int currentCase = 1; currentCase <= numberOfTestCases; currentCase++) {
        int arraySize;
        cin >> arraySize; // Read size of the array
        vector<int> inputArray(arraySize);
        for (int i = 0; i < arraySize; i++) {
            cin >> inputArray[i]; // Read array elements
        }

        // Compute GCD of adjacent elements
        vector<int> gcdValues;
        for (int i = 0; i < arraySize - 1; i++) {
            gcdValues.push_back(calculateGCD(inputArray[i], inputArray[i + 1]));
        }

        int breakIndex = -1;
        for (int i = 0; i < arraySize - 2; i++) {
            if (gcdValues[i] > gcdValues[i + 1]) {
                breakIndex = i;
                break;
            }
        }

        if (breakIndex == -1) {
            cout << "YES" << endl;
            continue;
        }

        // Try removing one element and recompute GCD
        vector<int> alteredArray1, alteredArray2, alteredArray3;
        for (int i = 0; i < arraySize; i++) {
            if (i != breakIndex + 1) {
                alteredArray1.push_back(inputArray[i]);
            }
            if (i != breakIndex + 2) {
                alteredArray2.push_back(inputArray[i]);
            }
            if (i != breakIndex) {
                alteredArray3.push_back(inputArray[i]);
            }
        }

        vector<int> newGcdValues1, newGcdValues2, newGcdValues3;
        for (int i = 0; i < arraySize - 2; i++) {
            newGcdValues1.push_back(calculateGCD(alteredArray1[i], alteredArray1[i + 1]));
            newGcdValues2.push_back(calculateGCD(alteredArray2[i], alteredArray2[i + 1]));
            newGcdValues3.push_back(calculateGCD(alteredArray3[i], alteredArray3[i + 1]));
        }

        // Check if GCDs are in non-decreasing order
        bool isValid1 = true, isValid2 = true, isValid3 = true;
        for (int i = 0; i < arraySize - 3; i++) {
            if (newGcdValues1[i] > newGcdValues1[i + 1]) {
                isValid1 = false;
                break;
            }
        }
        for (int i = 0; i < arraySize - 3; i++) {
            if (newGcdValues2[i] > newGcdValues2[i + 1]) {
                isValid2 = false;
                break;
            }
        }
        for (int i = 0; i < arraySize - 3; i++) {
            if (newGcdValues3[i] > newGcdValues3[i + 1]) {
                isValid3 = false;
                break;
            }
        }

        if (!(isValid1 || isValid2 || isValid3)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
