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
         
        
        cin>>n;int x;
       int odd=0, even=0; 
       for(int i=0; i<n; i++){
       
               cin>>x;
               if(x%2 != i%2){
                        if(x&1) odd++;
                        else even++;

               }
              
       }
        if(odd==even){
                cout<<odd<<endl;

               }else{
                 cout<<-1<<endl;

               }

    }
    return 0;
}
//Microsoft SDE Intern ..Priyanshu Yadav