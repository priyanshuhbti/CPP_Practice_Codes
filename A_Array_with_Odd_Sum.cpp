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
        int n;
         cin>>n;
       
        //   int sum = accumulate(vec.begin(), vec.end(), 0);
        //   if(sum&1){
        //     //For odd
        //     cout<<"YES"<<endl;

        //   }else{
        //     cout<<"NO"<<endl;

        //   }
        //Tere hairfall ho rha hai .. kyoki .. tu kr rha ...
        //Do not touch //Healthy //Eyes and Sleep 
        int sum=0; int even=0; int odd=0;


        for(int i=0; i<n; i++){
            int x;
            cin>>x;
              sum +=x;
         

                 if(x&1) odd++;
                 else even++;

        }
        if(sum % 2 ){
            cout<<"YES"<<endl;

        }else{
            if(even>=1 && odd >=1){
                cout<<"YES"<<endl;

            }else{
                cout<<"NO"<<endl;


            }
        }
        //Abb kuch kuch logic banana aa rha h ,,, stirver you are great .. priyanshu ..etc se kuch nhi aa rha tha..

    }
    return 0;
}