#include <stdio.h>
#include <math.h>
void hanoi(int n, int f, int m, int e)
{
    if(n==1) printf("\n%d %d", f, e);
    else{
    hanoi(n-1,f,e,m);
    printf("\n%d %d", f, e);
    hanoi(n-1,m,f,e);
    }
}
int main()
{
    int n, cnt;
    scanf("%d", &n);
    cnt = pow(2,n)-1;
    printf("%d",cnt);
    hanoi(n,1,2,3);
}
