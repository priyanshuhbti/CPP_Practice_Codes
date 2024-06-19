#include <iostream>
using namespace std;
void test_case(){
   
}
signed main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cout.tie(0); cout.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
         int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int t=2;
        char one = '#';
        char two = '.';
        if(i%2==1){
            one='.';
            two='#';

        }
        while(t--){
            for(int j=0; j<n; j++){
                int p=2;
                while(p--){
                    if(j%2==0){
                        cout<<one ;

                    }
                    else{
                        cout<<two;

                    }
                }
            }
            cout<<"\n";

        }


    }


    }
   
    return 0;
}
