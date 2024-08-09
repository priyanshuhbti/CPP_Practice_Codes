#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    // Main thing is Problem Solving and DSA || COdeforces ||Codechef || CSES Problemset 
    //Not Linux , Ubuntu ,Mac or Windows 11 ..
    //I find pretty easy to use the Win NoteBook to DSA and all as compared to the linux machine .

    string str;
    cin>>str;
    string  v = "aoyeuiAOYEUI";
    for(char ch:str){
        if(v.find(ch) < 12){
            continue;

        }
        cout<<".";
        cout<<char(tolower(ch));



    }

    return 0;
}