#include <bits/stdc++.h>
using namespace std;


//mehnat krte raho dsa krte raho and codeforces krte raho .. contest dete rho ..
//chro mt contest kuch 1-2 -3 krte ho ..  dhere dhere ho jaega .. n

/* kaam krne se mtlb hai .. chahe mn kre tou windows se krlo vrna linux use krlo .. dono me set hai  
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h1,h2,m1,m2;
     char c;
    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;
    int min1=h1*60 +m1 ;
    int min2 =h2*60 +m2;
    int mid=(min1 +min2)/2;
    int hrs= mid/60;
    int min= mid %60;
    if( hrs >9 && min >9){
        cout<<hrs <<":"<<min<<endl;

    }else{
        if(hrs<10) cout<<0;
        cout<<hrs<<":";
        if(min<10)cout<<0;
        cout<<min;

    }



    return 0;
}