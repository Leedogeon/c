#include<stdio.h>
int main(){
	int a,i,j,b;
	int arr[10001]={0};
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		scanf("%d",&b);
		arr[b]++;
	}
	
	for(i=0;i<10001;i++){
		if(arr[i]!=0){
			for(j=arr[i];j>0;j--)
			printf("%d\n",i);
		}
	}
}
