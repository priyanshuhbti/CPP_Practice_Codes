#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s = to_string(n);
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());

    cout << stoi(reversed_s) << endl;
    cout << (s == reversed_s ? "YES" : "NO") << endl;

    return 0;
}