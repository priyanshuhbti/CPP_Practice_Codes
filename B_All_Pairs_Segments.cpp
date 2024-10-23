#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,q;
	cin>>n>>q;
	vector<int>a(n);
	for(auto &v:a)cin>>v;
	map<long long,int>f;
	for(int i=0;i<n;i++){
		f[1ll*(i+1)*(n-i)-1]++;
		if(i<n-1)f[1ll*(i+1)*(n-i-1)]+=a[i+1]-a[i]-1;
	}
	while(q--){
		long long k;
		cin>>k;
		cout<<f[k]<<" ";
	}
	cout<<"\n";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)solve();
}