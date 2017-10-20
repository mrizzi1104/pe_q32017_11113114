#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int divide(int n, int m)
{
             
  int resto=n%m;
  while(resto!=0)
   {
         n   = m;
         m   = resto;
         resto = n%m;         
   }
  return m;
}


void main()
{
   int n,m;
   scanf("%d %d",&m,&n);
   int mdc = divide (n,m);
   printf("%d\n",mdc);
}
