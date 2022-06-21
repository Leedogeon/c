#include<stdio.h>
int main(){
	int a,b,i,j,k;
	int sum=0,max=0;
	int arr[101]={0};
	scanf("%d %d",&a,&b);
	
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<=a-3;i++){
		for(j=i+1;j<=a-2;j++){
			for(k=j+1;k<=a-1;k++){
				sum = arr[i]+arr[j]+arr[k];
				if(sum>max && sum<=b)
				max = sum;
			}
		}
	}
	printf("%d",max);
	
}
