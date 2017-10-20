#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int n)
{
    if(n==1)
        return n;
    return fat(n-1)*n;
}

float coef (int n,int k)
{
    int k1,k2,k3;
    k1 = fat(k);
    k2 = fat (n-k);
    k3 = fat (n);
    return k3/(k1*k2);
}

void main()
{
    int n,k;
    float coefi;
    scanf("%d %d",&n,&k);
    coefi = coef(n,k);
    printf("%f\n",coefi);
}
