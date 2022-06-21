#include<stdio.h>
int main(){
	int i,j,k;
	char temp;
	char a[11]={0};
	
	scanf("%s",a);

	for(i=0;i<11;i++){
		if(a[i]<48 || a[i]>58) break;
	}

	for(j=0;j<i-1;j++){
		for(k=0;k<i-1;k++){
			if(a[k]<a[k+1]){
				temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
		}
	}
		for(j=0;j<i;j++){
		printf("%c",a[j]);
	}
}
