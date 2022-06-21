#include <stdio.h>
int main(){
	int t,k,n,i,j,s;
	int rm[15]={0};
	
	scanf("%d",&t);

	for(i=0;i<t;i++){

		for(s=1;s<sizeof(rm)/4;s++){
			rm[s]=s;
		}	
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

