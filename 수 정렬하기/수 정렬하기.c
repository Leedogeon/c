#include <stdio.h>
int main(){
	int a,i,j,temp;
	int arr[1001]={0};
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<a-1;i++){
		for(j=0;j<a-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(i=0;i<a;i++){
			printf("%d\n",arr[i]);
	}
}
