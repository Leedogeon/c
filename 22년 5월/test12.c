#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int a,b,c,arr[20001]={0};
    int q,i,j,cnt=0;
    int min=0,max=0;
    arr[1]=1;
    scanf("%d", &a);
 	for(q=0;q<a;q++){
 	
	 scanf("%d", &b);
	 if(b%2!=0)
	 {
	 	q--;
		continue;
	}
	 
      	for(i=2;;i++){
			if(pow(i,2)>b) break;
			if(arr[i]==0){
				for(j=2;j<=b/2;j++){
					if(i*j>b) break;
					arr[i*j]=1;				
				}
			}
		}

		for(i=b/2;i>=2;i--){
			if(arr[i]==1) continue;
			for(j=b/2;j<b;j++){
				if(arr[j]==1) continue;
				if(i+j==b){
					min = i;
					max = j;
					cnt++;
				}
				if(cnt!=0) break;
			}
			if(cnt!=0) break;
		}
		cnt=0;
		printf("%d %d\n",min,max);

	}
}
