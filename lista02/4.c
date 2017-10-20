#include<stdio.h>
#include <stdlib.h>
#include <math.h>


double soma(double x, double y)
{
    return x+y;
}

double sub(double x,double y)
{
    return x-y;
}

double multi(double x,double y)
{
    return x*y;
}

double divi(double x,double y)
{
    return (x/y);
}

double pot(double x,double y)
{
    return pow(x,y);
}

void main()
{
   int sinal;
   double x,y;
   scanf("%d %lf %lf",&sinal,&x,&y);
   if(sinal==1)
   {
       x=soma(x,y);
   }
   else if (sinal==2)
   {
       x= sub(x,y);
   }
   else if (sinal==3)
   {
       x= multi(x,y);
   }
   else if(sinal==4)
   {
       x= divi(x,y);
   }
   else
    {
        x=pot(x,y);
    }
   printf("%lf\n",x);
}
