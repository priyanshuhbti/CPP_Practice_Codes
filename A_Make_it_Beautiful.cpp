#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
       ll n;
       cin>>n;
        vector<int> vec(n);
               for(int i=0; i<n; ++i){
                   cin>>vec[i];
               }

        if(vec.front()==vec.back())    {
             cout<<"NO"<<endl;

        }   
        else{
            cout<<"YES"<<endl;

            cout<<vec.back()<<" ";
            for(int i=0; i<n-1; i++){
                cout<<vec[i]<<" ";

            }
            cout<<endl;


        }

    }
    return 0;
}