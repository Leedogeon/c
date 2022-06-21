#include<stdio.h>
#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)
	int arr[200001]={0};

void quick(int data[],int start,int end){
	if(start>=end) return;
	int key =start;
	int i = start+2;
	int j = end;
	int temp;
	while(i<=j){
		while(data[i]<=data[key])
		{
			i+=2;

		}
		
		while(data[j]>data[key] && j>start)
		{
			j-=2;
		}
		
		if(i>j)
		{
			swap(int,data[j],data[key]);
			swap(int,data[j+1],data[key+1]);
		}
		else
		{
			swap(int,data[j],data[i]);
			swap(int,data[j+1],data[i+1]);
		}

	}
	quick(data,start,j-2);
	quick(data,j+2,end);
}
void quick2(int data[],int start,int end){
	if(start>=end) return;
	int key =start+1;
	int i = start+3;
	int j = end;
	int temp;
	int q;
	while(i<=j){
		while(data[i]<=data[key])
		{
			i+=2;
		}
		
		while(data[j]>data[key] && j>start)
		{
			j-=2;
		}
		if(i>j)
		{
			swap(int,data[j],data[key]);
		}
		else
		{
			swap(int,data[j],data[i]);
		}

	}
	quick2(data,start,j-2);
	quick2(data,j+2,end);
}
void sort(int data[],int start,int end){
	if(start>=end) return;
	int key=start;
	int i= start+2;
	int j= end;
	int temp;
	
	while(i<=j){
		while(data[i]==data[key]){
			i+=2;
		}
	}
	
	quick2(data,start,i-1);
	sort(data,i,end);
}

int main(){
	int a,i,j,cnt=0;
	scanf("%d",&a);
	int b=a*2;
	for(i=0;i<b;i++){
		scanf("%d",&arr[i]);		
	}
	quick(arr,0,b-2);
	sort(arr,0,b-2);
	
	for(i=0;i<b;i++){
		printf("%d ",arr[i]);
		cnt++;
		if(cnt%2==0) printf("\n");
	}

}
