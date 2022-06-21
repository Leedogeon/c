#include<stdio.h>
	int number=10;
	int data[10]={4,7,3,10,8,5,1,2,9,6};

void quick(int arr[],int start,int end){
	if(start>=end) return;
	int key =start;
	int i = start+1;
	int j = end;
	int temp;
	int q;
	while(i<=j){
		while(data[i]<=data[key])
		{
			i++;
		}
		
		while(data[j]>data[key] && j>start)
		{
			j--;
		}
		
		printf("i = %d, j = %d\n",i,j);
		if(i>j)
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[j];
			data[j]=data[i];
			data[i] = temp;
		}
			for(q=0;q<number;q++){
		printf("%d",data[q]);
	}
	printf("\n");
	}
	quick(data,start,j-1);
	quick(data,j+1,end);
}

int main(){
	int i;
	quick(data,0,number-1);
	for(i=0;i<number;i++){
		printf("%d",data[i]);
	}
}
