#include <bits/stdc++.h>
using namespace std;
      

int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // #endif

 int A, B;
    char S;
    cin >> A >> S >> B;

    cout << (S == '+' ? A + B : S == '-' ? A - B : S == '*' ? A * B : A / B) << endl;
    return 0;
}


