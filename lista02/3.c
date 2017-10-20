#include<stdio.h>
#include<math.h>

void main()
{
   int i;
   double a1,b= 1/sqrt(2),t=0.25,p=1,a=1;
   for(i=0;i<10;i++)
   {

     a1  =  (a+b)/i;
     b = sqrt ((a*b));
     t = t-p*(pow(a-a1,2));

     p=  2*p;
     a=  a1;
   }
   printf("%f",a);
}
