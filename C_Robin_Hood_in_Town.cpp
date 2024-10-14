#include<bits/stdc++.h>
using namespace std;
long long a[200000];
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	int T,n,i,p;
	long long s;
	for(cin>>T;T>0;T--)
	{
		cin>>n;
		s=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		// sort(a,a+n);
		sort(a,a+n);
		//This is the proper code for the code in the reminder..
		
		if(n<=2)
		{
			cout<<"-1\n";
			continue;
		}
		p=n/2;
		if(a[p]*n*2<s)cout<<"0\n";
		else cout<<a[p]*n*2+1-s<<'\n';
	}
	return 0;
}