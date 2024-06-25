#include<bits/stdc++.h>


// Written by Priyanshu Yadav

using namespace std;

long long memo[25][25]; // Memoization table to store intermediate results

// Function to perform the given operation on two numbers
long long performOperation(long long x, long long y, char operation) {
    if (operation == '+') return x + y;
    return x * y;
}

// Recursive function to find the minimum value by inserting operators
long long findMinValue(string expression, int index, int operationsLeft) {
    if (operationsLeft == 0) return stol(expression.substr(index));
    if (memo[index][operationsLeft] != -1) return memo[index][operationsLeft];
    
    long long minimumValue = 1e18;

    for (int i = index; i < expression.size() - operationsLeft; i++) {
        long long leftOperand = stol(expression.substr(index, i - index + 1));
        long long rightOperand = findMinValue(expression, i + 1, operationsLeft - 1);
        
        minimumValue = min(minimumValue, performOperation(leftOperand, rightOperand, '+'));
        minimumValue = min(minimumValue, performOperation(leftOperand, rightOperand, '*'));
    }
    
    return memo[index][operationsLeft] = minimumValue;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int numOperators;
        cin >> numOperators;
        
        string expression;
        cin >> expression;

        memset(memo, -1, sizeof(memo));

        cout << findMinValue(expression, 0, numOperators - 2) << endl;
    }

    return 0;
}
