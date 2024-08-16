#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int mx=n;
	for(int i=0;i<n;i++){
		if(s[i]=='1')
			mx=max(mx,2*max(i+1,n-i));
	}
	cout<<mx<<endl;
}
int main(){
	int n;
	cin>>n;
	while(n--) solve();
	return 0;
}