#include<stdio.h>
int t,n,x[200020],i;
int main(){
	scanf("%d",&t);
	for(;t--;){
		scanf("%d",&n);
		for(i=0;i++<n;)scanf("%d",x+i);
		printf(n<3&&x[2]-x[1]>1?"YES\n":"NO\n");
	}
}