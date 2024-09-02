#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        //Now your room looks professional and working like a iron man ..==> tera room phle kaise tha baxa jaisa ..

         //You should proove eveything by your own ...
         //Top Coder and backend + devops + iss saal gate me AIR 255 Rank la kr dikha do ..
         //Room Professional ..ab bss padhai kro professional ki tarah ..
        int n;
        cin>>n;
        n=n/2;
            if(n&1){
                cout<<"NO"<<endl;
                continue;

            }
        cout << "YES" << endl;
		for (int i = 1; i <= n; ++i) {
			cout << i * 2 << " ";
		}
		for (int i = 1; i < n; ++i) {
			cout << i * 2 - 1 << " ";
		}
		cout << 3 * n - 1 << endl;
    }
    return 0;
}