#include <bits/stdc++.h>
using namespace std;

int main() {

//My asus notebook to study and do my work of programming with good keybaord ...
//
	int n, x, y;
	cin >> n >> x >> y;
	
	int arr[n];
	for (int i=0; i<n; i++) cin >> arr[i];
	
	for (int i=0; i<n; i++) {
		bool can = true;
		int at = arr[i];
        //Left Work 
		for (int j=max(0, i-x); j<i; j++) {
			if (arr[j] < at) can = false;
		}
        //Right Work ..
		for (int j=i+1; j<min(n, i+y+1); j++) {
			if (arr[j] < at) can = false;
		}
		if (can) {
			cout << i+1 << endl;
			exit(0);
		}
	}
	
}
