#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void main()
{
  char num[10],contrario[10]; 
  int total=0,i,j,erro=0;
  scanf("%s",&num);
  total = strlen(num);
  j=total ;
  total++;
  j--;

  for(i=0; i < total; i++) 
  {
    contrario[i] = num[j];
    j--;
  }

  total--;

  for(i=0; i < total; i++) {
    if(num[i] != contrario[i]) 
       erro = 1;
   
   }

  if(erro == 1) printf("Nao\n");
  else printf("sim\n");

}
