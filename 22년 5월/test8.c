#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,i,j,arr[10001]={0},res[10001]={0},
	cnt=0,cnt2=0,min=0,sum=0;
	
	scanf("%d %d",&a,&b);
	
	if(a<=b){
		for(i=a;i<=b;i++){
		arr[i]=i;
		}
		for(i=a;i<=b;i++){
		cnt=0;
		if(arr[i]>10000) continue;
			for(j=arr[i];j>0;j--){
				if(arr[i]%j==0) cnt++;
			}
		if(cnt==2){
			res[i]=i;
			cnt2++;
			}
		}
		for(i=a;i<=b;i++){
			sum+= res[i];
		}
		for(i=a;i<=b;i++){
			if(res[i]!=0){
			min = i;
			}
		if(min!=0) break;
		}
		if(cnt2>=1) printf("%d\n%d",sum,min);
		else printf("-1");
	}
	else exit(0);
}
