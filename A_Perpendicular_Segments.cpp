#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, Y, K;
        cin >> X >> Y >> K;
        int  num=min(X,Y);



       cout << "0 " << num << " " << num << " 0" << endl;
        cout<< "0 0 " << num << " " << num << endl;
    }

    return 0;
}


