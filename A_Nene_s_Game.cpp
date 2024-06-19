#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num_cases;
    cin >> num_cases;
    while (num_cases--) {
        int num_elements, num_queries;
        cin >> num_elements >> num_queries;
        vector<int> elements(num_elements);
        for (int i = 0; i < num_elements; ++i)
            cin >> elements[i];
        for (int i = 0; i < num_queries; ++i) {
            int query;
            cin >> query;
            if (query >= elements[0])
                cout << elements[0] - 1 << " ";
            else
                cout << min(query, elements[0]) << " ";
        }
        cout << endl;
    }
    return 0;
}
