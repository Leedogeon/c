#include <stdio.h>
#include<string.h>
int main(){
	char a[10001],b[10001],res[10003]={0};
	int i=0,j,temp,ck1=0,ck2=0,ck=0,ck3=0;
	scanf("%s %s",a,b);

	while(a[i+1] !='\0'){
		i++;
		ck1 = i;
	}
	for(j=0;j<=ck1/2;j++)
		{
			temp = a[j];
			a[j]= a[i-j];
			a[i-j] = temp;
		}
	i=0;
	while(b[i+1] !='\0'){
		i++;
		ck2 = i;
	}
	for(j=0;j<=ck2/2;j++)
		{
			temp = b[j];
			b[j]= b[i-j];
			b[i-j] = temp;
		}
	i=0;
		
	if(ck1>=ck2) ck = ck1;
	else ck = ck2;
	
	ck3=ck;

	for(i=0;i<=ck;i++){
		if(a[i]==0) a[i]=48;
		if(b[i]==0) b[i]=48;
	
		if(res[i] + a[i]+b[i]-96 <= 9){
		res[i] += a[i]+b[i]-96;
		}
		else if(res[i] + a[i]+b[i]-96>9){
		res[i] += (a[i]+b[i]-106);
		res[i+1]=1;

		if(i == ck) ck3=ck+1;
		}
	}
	for(j=0;j<=ck3/2;j++)
		{
			temp = res[j];
			res[j]= res[ck3-j];
			res[ck3-j] = temp;
		}
	for(i=0;i<=ck3;i++){
			printf("%d",res[i]);
		}
}
