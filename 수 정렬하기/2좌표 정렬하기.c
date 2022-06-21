#include<stdio.h>
#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

int main(){
	int a,c,i,j,cnt=0;
	scanf("%d",&a);
	int arr[200001]={0};
	int b=a*2;
	for(i=0;i<b;i++){
		scanf("%d",&arr[i]);		
	}
	
	for(i=0;i<b/2;i++){
		for(j=0;j<b-2;){
			if(arr[j]>arr[j+2]){
				swap(int,arr[j],arr[j+2]);
				swap(int,arr[j+1],arr[j+3]);
			}
			else if(arr[j]==arr[j+2]){
				if(arr[j+1]>arr[j+3]){
					swap(int,arr[j+1],arr[j+3]);
				}
			}		
		j=j+2;
		}
	}
	for(i=0;i<b;i++){
		printf("%d ",arr[i]);
		cnt++;
		if(cnt%2==0) printf("\n");
	}

}
