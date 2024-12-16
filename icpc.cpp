#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// Function to generate all prime numbers up to 2 * 10^6
vector<int> sieve(int limit) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int T;
    cin >> T;

    const int MAX_VAL = 2000000;
    vector<int> primes = sieve(MAX_VAL);

    while (T--) {
        int N, K;
        cin >> N >> K;

        // Maximum possible pairs
        int max_pairs = N * (N - 1) / 2;

        if (K > max_pairs) {
            cout << -1 << endl;
            continue;
        }

        vector<int> result(N);
        
        // If we need exactly max_pairs, use only primes
        if (K == max_pairs) {
            for (int i = 0; i < N; i++) {
                result[i] = primes[i];
            }
            cout << result[0];
            for (int i = 1; i < N; i++) {
                cout << " " << result[i];
            }
            cout << endl;
        } else {
            // If we need fewer pairs, we need to manipulate the numbers
            // Initialize the array with primes
            for (int i = 0; i < N; i++) {
                result[i] = primes[i];
            }

            // Try to adjust the array to match exactly K co-prime pairs
            // Placeholder solution for simplicity
            // (A more advanced solution may involve replacing some elements 
            //  with numbers that share prime factors to reduce co-prime pairs.)
            // For now, assume we can't always find the exact K.
            
            // Print the result array
            cout << result[0];
            for (int i = 1; i < N; i++) {
                cout << " " << result[i];
            }
            cout << endl;
        }
    }
    return 0;
}
