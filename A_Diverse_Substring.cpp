#include<bits/stdc++.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	std::cin >> t;
	std::string s;
	std::cin >> s;
	for (int i = 1; i < t; i++) {
		if (s[i] != s[i - 1]) {
			std::cout << "YES\n";
			std::cout << s[i - 1] << s[i];
			return 0;
		}
	}
	std::cout << "NO";
	return 0;//
}