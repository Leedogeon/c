#include<stdio.h>
int main()
{
	int a,i,max,min;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	
	for(i=0;i<a;i++)
	{
		if(max<arr[i]) {
		max = arr[i];}
		
		if(min>arr[i]){
		 min = arr[i];
	}
	}
	
	printf("%d %d",min,max);
	
	return 0;
}
