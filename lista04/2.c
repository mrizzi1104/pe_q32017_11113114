#include<stdio.h>

struct cronometro {
   int m;
   int s;
   int d;
};

void main()
{
    struct cronometro p1,p2;
    scanf("%dm %ds %d",&p1.m,&p1.s,&p1.d);
    scanf("%dm %ds %d",&p2.m,&p2.s,&p2.d);
    printf("%dm %ds %d\n",(p2.m-p1.m),(p2.s - p1.s),(p2.d - p1.d));
}
