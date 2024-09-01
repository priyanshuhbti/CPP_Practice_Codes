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
        int n,m;
        cin>>n>>m;
        //CP to code likhna hota hai .. chahe windows me kr ya linux me ..
         vector<int> vec(n);
                for(int i=0; i<n; ++i){
                    cin>>vec[i];
                    
        
                }
                //Isse ye pta lgta hai.. ki Gnome mere aas pass hi hai ..
                //Bss mai bhi agr Concentrate karu then .. uske barabr pachuch jaunga ..

      int v= *max_element(vec.begin(),vec.end());
      for(int i=0; i<m; i++){
        char c;
        int l,r;
        cin>>c>>l>>r;
        if(l<=v && v <=r){
            if(c== '+'){
                v=v+1;

            }else{
                v=v-1;

            }
        }
        cout<<v;
        if( i !=m -1){
            cout<< " ";

        }
      }cout<<endl;


           
    }
    return 0;
}