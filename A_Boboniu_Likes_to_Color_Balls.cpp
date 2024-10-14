    #include<bits/stdc++.h>
    using namespace std;
    using lint = long long;
     
    int main() {
        int t=1; cin>>t;
        while(t--) {
            lint a, b, c, d; cin>>a>>b>>c>>d;
            int odd = 0;
            if(a%2) odd++;
            if(b%2) odd++;
            if(c%2) odd++;
            if(d%2) odd++;
            if(odd<=1) cout<<"Yes"<<endl;
            else {
                if(a==0||b==0||c==0) {
                    cout<<"No"<<endl;
                    continue;
                }
                if(odd==2) cout<<"No"<<endl;
                else cout<<"Yes"<<endl;
            }
        }
    }