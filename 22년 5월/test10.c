#include<stdio.h>
#include<math.h>
int main(){
	int a,b,i,j;
	char arr[1000001]={0};
	scanf("%d %d",&a,&b);
	arr[0]=1,arr[1]=1;
	
	for(i=2;;i++){
		if(pow(i,2)>b) break;
		if(arr[i]==0){
			for(j=2;j<=b/2;j++){
				if(i*j>b) break;
				arr[i*j]=1;				
			}
		}

	}
	for(i=a;i<=b;i++)
	{
		if(arr[i]==0) printf("%d\n",i);
	}
	
}
