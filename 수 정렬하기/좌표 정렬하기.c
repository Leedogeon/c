#include<stdio.h>
int main(){
	int a,b,c,i,j;
	int maxi=0,mini=0,minj=0,maxj=0;
	scanf("%d",&a);
	double arr[201][201]={0};
	

	for(i=0;i<a;i++){
		scanf("%d %d",&b,&c);
		arr[b+100][c+100]++;
		if(b<0 && b<mini){
			mini = b;
		}
		else if(b>0 && b>maxi){
			maxi = b;
		}
		if(c<0 && c<minj){
			minj = c;
		}
		else if(c>0 && c>maxj){
			maxj = c;
		}
		
	}
	
	printf("%d %d %d %d\n",mini,minj,maxi,maxj);
	
	
	for(i=mini+100;i<=maxi+100;i++){
		for(j=minj+100;j<=maxj+100;j++){
			if(arr[i][j]!=0) printf("%d %d, %d\n",i-100,j-100,arr[i][j]);
		}
	}

}
