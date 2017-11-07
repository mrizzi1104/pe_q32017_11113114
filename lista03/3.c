#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    int v1[5],v2[5],v3[5];
    for ( i=0;i<5;i++)
    {
        scanf("%d",&v1[i]);
    }
    for ( i=0;i<5;i++)
    {
        scanf("%d",&v2[i]);
        v3[i] = v1[i] + v2[i];
        printf("%d ",v3[i]);
    }
     printf("\n");

     return 0;
}
