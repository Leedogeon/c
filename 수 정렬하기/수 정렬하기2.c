#include<stdio.h>
int main(){
	int a,i,j,b;
	char arr[2000001]={0,};
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		scanf("%d",&b);
		arr[b+1000000]++;
	}
	
	for(i=0;i<2000001;i++){
		if(arr[i]!=0) printf("%d\n",i-1000000);
	}
}
