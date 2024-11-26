#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    set<int> s;
    int x;cin>>x;
    while(x--){int k;cin>>k;s.insert(k);}
    cin>>x;
    while(x--){int k;cin>>k;s.insert(k);}
    n==s.size()?cout<<"I become the guy.":cout<<"Oh, my keyboard!";
}