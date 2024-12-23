#include <bits/stdc++.h>
using namespace std;
      

int main()
{

   

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


