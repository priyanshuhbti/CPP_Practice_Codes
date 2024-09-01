#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        // Calculate the total number of integers in the range
        int totalNumbers = r - l + 1;

        // The maximum number of operations is simply the number of triplets we can form
        int operations = totalNumbers / 3;

        cout << operations << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
 
 
 cout<<(((r+1)/2 - l/2))/2<<endl;
 

    }
    return 0;
}