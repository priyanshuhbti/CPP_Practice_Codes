#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Input number of test cases
    while (T--) {
        int M, P;
        cin >> M >> P;  // Input the current minute M and current penalty P

        // If M == 299, the team has no time left for wrong submissions
        if (M == 299) {
            cout << 0 << endl;
            continue;
        }

        int maxWrongSubmissions = 0;
        int currentPenalty = P;
        int currentTime = M;

        while (currentTime < 299) {
            int penaltyAfterWrong = currentPenalty + 20;  
            int submissionTime = currentTime + 1;  

            int totalPenalty = penaltyAfterWrong + submissionTime;

            if (totalPenalty > 1000) {
                break;
            }

            currentPenalty = penaltyAfterWrong;
            currentTime++;
            maxWrongSubmissions++;
        }

        cout << maxWrongSubmissions << endl; 
    }
    return 0;
}
