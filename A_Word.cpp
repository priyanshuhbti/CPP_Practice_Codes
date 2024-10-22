#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	int u = 0, d = 0;
	cin >> s;
	for (auto i : s){
		if (isupper(i)) u++;
		else d++;
	}
	if (u > d) {
		for (auto& i : s) i = toupper(i);
	} else{
		for (auto& i : s) i = tolower(i);
	}
	cout << s;
}