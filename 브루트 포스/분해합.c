#include<stdio.h>
#include<math.h>
int main(){
	int a,i,j,k,p=0,sum=0,cnt=0,cnt2=0,res=0;
	scanf("%d",&a);
	
	if(a==1){
		printf("0");
		return 0;
	}

	for(i=1;i<=a;i++){
		cnt = 0;
		sum = 0;
		for(j=1;j<=6;j++){
			if(i<10) break;
		p=pow(10,j);
		if(i/p<10) cnt = j;
		if(cnt!=0) break;
		}
		
		sum +=i;
		res = i;
		for(k=cnt;k>=0;k--){
			p=pow(10,k);
			sum += (res/p);
			res -= (res/p)*p;
		}
		if(sum == a) cnt2++;
		if(cnt2!=0) break;
	}
	if(cnt2!=0)	printf("%d",i);
	else printf("0");
}
