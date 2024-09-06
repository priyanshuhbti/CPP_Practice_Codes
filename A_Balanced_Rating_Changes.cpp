
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,flag=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(x%2==0) cout<<x/2<<'\n';
		else cout<<(x+flag)/2<<'\n',flag=-flag;
	}
	return 0;
	
}