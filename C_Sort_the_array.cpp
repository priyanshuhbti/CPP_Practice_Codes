#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    

    //Jitta ye assan lg rha hai utna hai nhi so .. please makes your basics strng 
    //Problems + Theory
     vector<long long> vec(n);
            for(long long i=0; i<n; ++i){
                cin>>vec[i];
            }
      stable_sort(vec.begin(),vec.end());
     for(long long i=0; i<n; i++){
        cout<<vec[i]<<" ";
     }      
     cout<<endl;


    return 0;
}