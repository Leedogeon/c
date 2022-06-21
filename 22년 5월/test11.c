#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int a=1,arr[250000]={0};
    int i,j,cnt=0;
    arr[1]=1;
    scanf("%d", &a);
 	while (a!=0) {
        if(a>123456) break;
        
        	for(i=2;;i++){
				if(pow(i,2)>a*2) break;
				if(arr[i]==0){
					for(j=2;j<=a;j++){
						if(i*j>a*2) break;
						arr[i*j]=1;				
					}
				}
			}
			
		for(i=a+1;i<=a*2;i++){
			if(arr[i]==0) cnt++;
		}
		printf("%d\n",cnt);
		cnt=0;
		scanf("%d", &a);
		}
}
