#include<iostream>
using namespace std;
int n , h[40] , g[40] , t = 0;


int main(){
	cin >> n;
	for (int i = 0 ; i < n ; ++ i){
		cin >> h[i] >> g[i];
	}
	for (int i = 0 ; i < n ; ++ i){
		for (int j = 0 ; j < n ; ++ j){
			if (g[i] == h[j]) t ++;
		}
	}
	cout << t;
}
