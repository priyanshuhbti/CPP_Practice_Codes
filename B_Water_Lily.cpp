#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /*
     COncept is :-
     Circel concept :- (a+h)2 = a2 +l2;
     so on solving a = (l2 -h2)/2*h ;

    */
   double l,h;
   cin>>h>>l;
   cout<<fixed <<setprecision(13)<<(l*l -h*h)/(2*h)<<endl;
   

    return 0;
}