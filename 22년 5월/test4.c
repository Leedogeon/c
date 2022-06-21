#include<stdio.h>
int main(){
	int a,r1=0,r2=0,sum=0,i,j,cnt=0;
	scanf("%d",&a);
	
	if(a<=5){
		if(a==3) sum=1;
		else if(a==5) sum=1;
		else sum= -1;
	}
	else for(i=0;i<=a/3;i++){
		r1=3*i;
		for(j=0;j<=a/5;j++){
			sum=0;
			r2=5*j;
			sum = r1+r2;
			if(sum == a){
				sum = i+j;
				cnt ++;
				break;
			}
		}
		if(cnt == 1) break;
		else sum = -1;
	}
	printf("%d",sum);
}
