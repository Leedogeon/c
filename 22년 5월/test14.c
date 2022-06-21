#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>20) return 0;
	printf("%d",fib(a));
}

int fib(int a){
	if(a==0) return 0;
	else if(a==1) return 1;
	return fib(a-1)+fib(a-2);
	
}
