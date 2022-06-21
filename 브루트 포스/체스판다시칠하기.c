#include <stdio.h>
int main(){
	int a,b,i,j,k,q,min=100,res=0;
	int Bc[51][51],Wc[51][51];
	scanf("%d %d",&a,&b);
	char arr[51][51];
	
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf(" %c",&arr[i][j]);
		}
	}
	
	for(i=0;i<=a-8;i++){
		for(j=0;j<b-8;j++){
			Bc[i][j]=0;
			Wc[i][j]=0;

		}
	}
	
	for(i=0;i<=a-8;i++){
		for(j=0;j<=b-8;j++){
			for(k=0;k<8;k++){
				for(q=0;q<8;q++){
					if(k%2 == q%2){
						if(arr[i+k][j+q]=='B') Bc[i][j]++;
						else if(arr[i+k][j+q]=='W') Wc[i][j]++; 
					}
					if(k%2!=q%2){
						if(arr[i+k][j+q]=='B') Wc[i][j]++;
						else if(arr[i+k][j+q]=='W') Bc[i][j]++;
					}
				}	
			}
		}
	}
		for(i=0;i<=a-8;i++){
		for(j=0;j<=b-8;j++){
			res = (Bc[i][j]<Wc[i][j])?Bc[i][j]:Wc[i][j];
			min = (min<res)?min:res;
		}
	}
	
	printf("%d",min);
}
