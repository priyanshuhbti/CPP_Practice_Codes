#include <bits/stdc++.h> 
using namespace std; 
 
typedef long long ll; 
 
int main(){ 
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    int T; 
    cin >> T; 
    while(T--){ 
        int N, K; 
        cin >> N >> K; 
        vector<int> A(N); 
        for(int &x:A) cin >> x; 
        // Find min and max 
        int mn = A[0], mx = A[0]; 
        for(int x:A){ 
            if(x < mn) mn = x; 
            if(x > mx) mx = x; 
        } 
        // Binary search between 0 and mx - mn 
        ll l = 0, r = (ll)(mx) - (ll)(mn); 
        // To cover cases where all A[i] are same 
        if(r < 0) r = 0; 
        while(l < r){ 
            ll mid = l + (r - l)/2; 
            // Check if possible with D=mid 
            ll count =1; 
            ll low = (ll)A[0] - mid; 
            ll high = (ll)A[0] + mid; 
            for(int i=1;i<N;i++){ 
                ll new_low = (ll)A[i] - mid; 
                ll new_high = (ll)A[i] + mid; 
                low = max(low, new_low); 
                high = min(high, new_high); 
                if(low > high){ 
                    count +=1; 
                    low = new_low; 
                    high = new_high; 
                } 
            } 
            if(count <= (ll)(K) + 1){ 
                r = mid; 
            } 
            else{ 
                l = mid +1; 
            } 
        } 
        cout << l << '\n'; 
    } 
}

