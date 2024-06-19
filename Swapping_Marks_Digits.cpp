#include <iostream>
#include <algorithm>
using namespace std;

bool isAliceScoreHigher(int A, int B) {
    // Reverse the digits of both A and B
    int revA = (A % 10) * 10 + (A / 10);
    int revB = (B % 10) * 10 + (B / 10);

    // Check if Alice's reversed score is higher than Bob's reversed score
    
    if (A>B)
    return true;
    if (revA>B)
    return true;
    if (A>revB)
    return true;
    if(revA>revB)
    return true;

    return false;
     

}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;

        if (isAliceScoreHigher(A, B)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
