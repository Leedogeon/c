#include <stdio.h>
int main(){
	int a,i=0,j=0,cnt=0,cnt2=0;
	scanf("%d",&a);
	int res = a;
	if(a==1) i=1;
	while(i==0){
		for(j=2;j<=a/2;j++){
			if(res%j==0)
			{
				printf("%d\n",j);
				res = res/j;
				cnt++;
				cnt2++;
			}
			if(cnt>=1)	break;
		}
		cnt=0;
		if(cnt2==0){
			 printf("%d",a);
			 i++;
		}
		if(res<=1) i++;
	}
}
