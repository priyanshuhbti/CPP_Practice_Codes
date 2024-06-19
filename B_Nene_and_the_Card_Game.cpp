#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin >> cases;
    while (cases--) {
        int size;
        cin >> size;
        int arr[size];
        unordered_map<int, int> freq_map;
        for(int i = 0; i < size; i++) {
            cin >> arr[i]; 
            freq_map[arr[i]]++;
        }   
        int answer = 0;
        for(auto it : freq_map) {
            if(it.second == 2) 
                answer++;
        }   
        cout << answer << endl;
    }
    return 0;
}
