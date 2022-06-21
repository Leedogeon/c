#include<stdio.h>
int main(){
	int a,i,j;
	int x[51]={0},y[51]={0};
	scanf("%d",&a);
	if(a<2) return 0;
	int z[51]={0},cnt[51]={0};
	for(i=0;i<a;i++){
		scanf("%d %d",&x[i],&y[i]);
		
	}
	
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(x[i]<x[j] && y[i]<y[j]) z[i]++;
		}
	}

	for(i=0;i<a;i++){
				printf("%d ",z[i]+1);
	}
}
