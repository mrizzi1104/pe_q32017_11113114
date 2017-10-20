#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fibMen[1000];

int fib (int n)
{
    if(n==0)
        fibMen[n]=0;
    if(n<2)
        fibMen[n]=1;
    if ((fibMen[n-1] + fibMen[n-2])!= fibMen[n])
        fibMen[n]= fibMen[n-1] + fibMen[n-2];

    return fibMen[n];

}

int main()
{
    int n;
    fibMen[1]=1;
    fibMen[2]=1;
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;

}
