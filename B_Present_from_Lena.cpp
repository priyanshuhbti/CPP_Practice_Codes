// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//      int n;
//      cin>>n;
//      for(int i=0; i<=n; i++){
//         for(int j=0; j<i; j++){
//             cout<<j <<" ";
//         }
//         for(int j=n; j=0; j--){
//             cout<<j<<" ";

//         }
//         cout<<endl;

//      }
     

//     return 0;
// }

    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n, t; cin >> n;
     
        for (int i = -n; i <= n; i++)
        {
            t = abs(abs(i) - n);
            for (int j = 0; j < abs(i); j++)
            {
                cout << "  ";
            }
            for (int j = -t; j <= t; j++)
            {
                cout << abs(abs(j) - t);
                if (j == t) cout << endl;
                else cout << " ";
            }
        }
    }