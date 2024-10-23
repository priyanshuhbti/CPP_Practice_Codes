#include<bits/stdc++.h>
using namespace std;



int main() {
	int t; cin >> t;
	while(t--) {
		

        int n; cin >> n;
	if(n&1) {
		int last = n;
		int first = 1;
		for(int i = 1; i <=n; i++) {
			if(i&1) {
				cout << last<< " ";
				last--;
			} else {
				cout << first << " ";
				first++;
			}
		}
		cout << '\n';
	} else {
		cout << -1 << '\n';
	}

	}
}