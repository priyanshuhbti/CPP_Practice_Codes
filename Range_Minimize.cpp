#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	   
	   vector<int> vec(n);
	   for(int i=0; i<n; i++){
	       cin>>vec[i];
	       
	   }
       sort(vec.begin(),vec.end());

	 //Three cases 
    //  int max1= vec[n-3] -vec[0];
    //  int mx2= vec[n] -vec[2];
    //  int mx3 =vec[n-1] -vec[1];
    //  cout<<min(max1, min(mx2,mx3))<<endl;
     int ans= min({vec[n-3]- vec[0] ,vec[n-2]-vec[1], vec[n-1]- vec[2]});
     cout<<ans<<endl;


	}

}
