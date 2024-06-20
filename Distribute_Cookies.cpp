#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        long long N, M;
        cin >> N >> M;
        
        if (M < N) {
            // If we have fewer cookies than kids, we need to add (N - M) cookies
            cout << (N - M) << endl;
        } else {
            // Calculate the remainder of cookies when divided by the number of kids
            long long remainder = M % N;
            
            // Calculate the number of cookies needed to add to reach the next multiple of N
            long long time_to_add = N - remainder;
            // Calculate the number of cookies needed to remove to reach the previous multiple of N
            long long time_to_remove = remainder;
            
            // Output the minimum time needed to either add or remove cookies
            cout << min(time_to_add, time_to_remove) << endl;
        }
    }
    
    return 0;
}
