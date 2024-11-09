#include<bits/stdc++.h>
using namespace std;
int main(){
	int T,n,i,a,c;
	cin>>T;
	while(T--)
	{
		cin>>n;
		c=0;
		for(i=0;i<n*2;i++)
		{
			cin>>a;
			c+=a;
		}
		cout<<c%2<<' '<<min(c,n*2-c)<<'\n';
	}
	return 0;
}