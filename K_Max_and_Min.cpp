#include <bits/stdc++.h>
using namespace std;

/* Main()  function */
int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // #endif
vector<int> vec(3);
for(int i=0; i<3; i++){
    cin>>vec[i];

}
int m =*max_element(vec.begin(),vec.end());
int n =*min_element(vec.begin(),vec.end());
cout<<n<< " "<<m<<endl;


    return 0;
}


