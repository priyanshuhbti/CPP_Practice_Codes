#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n,c;
    cin >> n;
    vector<int> vec;
    for(int i=0; i<n; ++i){
        int a;
        cin>>a;
         c=abs(a);

        vec.push_back(c);

    }

    sort(vec.begin(),vec.end());
    cout<<vec[0]<<endl;
    

    
    return 0;
}