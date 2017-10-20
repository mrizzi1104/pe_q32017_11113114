#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int pot(int x,int y)
{
    if(y==1)
    {
        return x;
    }
    return x*pot(x,y-1);
}

void main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    x= pot(x,y);
    printf("%d\n",x);
}
