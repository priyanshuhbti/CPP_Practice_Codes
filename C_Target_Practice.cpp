#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int mat[10][10]={
    {1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}

};

int main()
{
    
    int t , sum=0;
    cin >> t;
    for (int i = 1; i <= t; i++) {

        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                char c;
                cin>>c;
                if(c=='X'){
                    sum +=mat[i][j];

                }
               

            }

        }
        
 cout<<sum<<endl;
    }
    
    return 0;
}