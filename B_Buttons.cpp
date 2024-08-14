#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //As a Electronics Student you have to learn primarily four- five most important languages 
    //1. C++/C ==>Embedded System , OS , Computer Architectures ..
    //2. Python ==> Robotics +Signals +Machine Leaning + Image Processing 
    //3. MATLAB ==> Wireless/Digital Communication Systems 
    //4. Verilog ==> For Hardware Designning and All ..
    //5. Shell Scripting ==> LInux based language .just to write the servers/ OS /and modifications of the Kernel ..

    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
   
        ll n;
        cin>>n;
         ll sum=n;
          // 1* n-1 +  2 *n-2 + 3*n-3 + ...
        for(ll i=1; i<n; i++){
            sum += i*(n-i);

        }
        cout<<sum<<endl;

        
    
    return 0;
}

//Starting mujhe bhi lgta hai ..pagal hai ... but i am also mad for the linux 
//Now i am a soldier of the Ubuntu LTS 
//Army of the Arch , Mint ,Debian , Manjaro , Mac ,CentOS ,Amazon OS ..
