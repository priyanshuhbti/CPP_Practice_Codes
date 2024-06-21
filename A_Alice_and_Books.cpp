#include <iostream>
#include <vector>
#include <algorithm>

// Code written by Priyanshu Yadav IITK
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Number of books
        vector<int> pages(n);

        for (int i = 0; i < n; ++i) {
            cin >> pages[i];  // Number of pages in each book
        }

       
        int maxPages = pages[n-1] + *max_element(pages.begin(), pages.end()-1);
        cout << maxPages << endl;
    }

    return 0;
}
