#include <bits/stdc++.h>
using namespace std;
      

int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // #endif

//EK taraf se finish kro..

  vector<int> vec(3);
  for(int i=0; i<2; i++){
    cin>>vec[i];

  }
  sort(vec.begin(), vec.end());
  if(vec[1]% vec[0]){
    cout<<"Multiples"<<endl;

  }else{
    cout<<"No Multiples"<<endl;
    
  }

    return 0;
}


