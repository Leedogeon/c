#include <stdio.h>
#include <math.h>
int star(int N)
{
    char arr[N][N];
    int k,i,j;
    k = N;
    for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++){
			arr[i][j]='*';	
		}
	}
	while(k!=1)
	{
	    for(i=0;i<N;i++)
	    {
	        for(j=0;j<N;j++)
	        {
	            if((i/(k/3))%3==1&&(j/(k/3))%3==1)
	            {
                	arr[i][j]=' ';
   	    		}     
   	    	}
   	 	}
	k= k/3;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++){
			printf("%c",arr[i][j]);
		}
 	printf("\n");
 	}
    return 0;
}
int main()
{
	int N;
    scanf("%d",&N);
    star(N);
}

