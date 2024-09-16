#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        long long n;
string vec ="aeiou";

        cin>>n;
        string str;
        
        for(int i=0; i<5; i++){
                for(int j = 0; j < n / 5 + (i < n % 5); j++){
                        str =str + vec[i];

                }
        }
        cout<<str<<endl;

    }
    return 0;
}

