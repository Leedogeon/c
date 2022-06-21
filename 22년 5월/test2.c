#include <stdio.h>
int main(){
	int t,k,n,i,j;
	int rm[15]={0};
	
	scanf("%d",&t);

	for(i=0;i<t;i++){
	reset(rm);
	scanf("%d %d",&k,&n);
	
	while(k!=0){
		for(j=2;j<15;j++){
			rm[j] += rm[j-1];
		}
		k--;
	}
	printf("%d\n",rm[n]);
	}
}
int reset(int *rm){
	int i;
	for(i=1;i<15;i++){
		rm[i]=i;
	}
}
