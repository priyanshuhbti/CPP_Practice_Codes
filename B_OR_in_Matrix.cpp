#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m,n;
    cin>>m>>n;
    int A[m][n], B[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>B[i][j];
            
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            A[i][j]=1;
    
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(B[i][j]==0){
                for(int k=0;k<n;k++)
                A[i][k]=0;
                for(int k=0;k<m;k++)
                A[k][j]=0;
            }
            
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(B[i][j]==1){
                int sum=0;
                for(int k=0;k<n;k++)
                sum+=A[i][k];
                for(int k=0;k<m;k++)
                sum+=A[k][j];
                
                if(sum==0){
                    cout<<"NO"<<endl;
                    return;
                }
            }
            
    cout<<"YES"<<endl;            
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        } 
        cout<<endl;   
    }    
}

int main()
{
   
        solve();

    return 0;
}