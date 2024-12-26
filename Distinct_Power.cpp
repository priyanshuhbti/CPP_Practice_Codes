#include <bits/stdc++.h>

using namespace std;


/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back


vi getR(vi& powers) {
    int n = powers.size();
    vector<pair<int, int>> indexed_powers;
    for (int i = 0; i < n; i++) {
        indexed_powers.push_back({powers[i], i});
    }
    
    sort(indexed_powers.rbegin(), indexed_powers.rend());
    vector<int> ranks(n);
    for (int i = 0; i < n; i++) {
        ranks[indexed_powers[i].second] = i + 1;
    }
    return ranks;
}

int solve(int N, vector<int>& A) {
    set<vector<int>> unique_ranks;
    
    for (int i = 0; i < N; i++) {
        // Create array without ith element
        vector<int> temp;
        for (int j = 0; j < N; j++) {
            if (j != i) temp.push_back(A[j]);
        }
        
        // Get ranks for remaining elements
        vector<int> ranks = getR(temp);
        unique_ranks.insert(ranks);
    }
    
    return unique_ranks.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        cout << solve(N, A) << "\n";
    }
    
    return 0;
}







