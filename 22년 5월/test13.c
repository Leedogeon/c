#include<stdio.h>
#include<string.h>
int main(){
	int a,res=1,i;
	scanf("%d",&a);
	if(a>12) return 0;
	printf("%d",fact(a));
}
int fact(int a){
	if(a<=0) return 1;
	else if(a==1) return 1;
	else return a*fact(a-1);
}
