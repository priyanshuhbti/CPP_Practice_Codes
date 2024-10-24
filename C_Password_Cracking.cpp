#include <bits/stdc++.h>
using namespace std;
#define ll long long

int guess(string s) {
	cout << "? " << s << endl;
	int a;
	cin >> a;
	return a;
}

//Interactive Problem :- Medium Level Codeforces


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		bool ok = 0;
		for (int i = 0; i < n; i++) {
			if (!ok) {
				if (guess(s + "0"))
					s += "0";
				else if (guess(s + "1"))
					s += "1";
				else
					ok = 1;
			}
			if (ok) {
				if (guess("0" + s))
					s = "0" + s;
				else
					s = "1" + s;
			}
		}
		cout << "! " << s << endl;
	}
}