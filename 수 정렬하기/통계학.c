#include<stdio.h>
int main(){
	int a,b,i,j,cnt=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,mid=0,top=0;
	int cntm=0,min=0,max=0,res=0;
	float sum=0;
	int arr[8001]={0};
	scanf("%d",&a);
	if(a%2==0) return 0;
	cntm=a;
	for(i=0;i<a;i++){
		scanf("%d",&b);
		arr[b+4000]++;
		sum+=b;
		if(b>cnt) cnt = b;
		if(b<cnt2) cnt2 = b;
	}

	sum = sum/a;
	if(sum<=0 && sum>-0.5) sum = 0;
	for(i=cnt2+4000;i<cnt+4001;i++){
		if(arr[i]!=0){
			if(cntm==a) min = i-4000;
			for(j=arr[i];j>0;j--){
				 cntm--;
	 			if(cntm==a/2) mid = i-4000;
			}
			if(cntm==0) max = i-4000;
			
			if(arr[i]>cnt4) cnt5=0;
			
			if(arr[i]>=cnt4){
				cnt4 = arr[i];
				cnt5 ++;
				if(cnt5 <=2) top = i-4000;
			}
		}
	}
	res = max - min;	
	printf("%.lf\n%d\n%d\n%d\n",sum,mid,top,res);
}
