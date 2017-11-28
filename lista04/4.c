#include <stdio.h>
#include <time.h>
#include <limits.h>
#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1 (ulint x)
{
    int nao=0; /// representa que e potencia de
    int cont=0;
    if( (x%2) != 0)
    {
        while( x!=0 )
        {
            x= x/2;
            cont++;
        }
       /* if(cont%2==0)
        {
            printf ("sim");
        }
        else
            printf ("nao"); */
    }
    //else
      //  printf("nao");

    int div =8;
    return x/div;
}
ulint f2 (ulint x)
{
    if (x==1 || !(x&(x-1))) {
        return 1; //É POTENCIA DE 2.
    }
    else {
        return 0; //NÃO É POTENCIA DE 2.
    }
}

int main (void )
{
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma = 0;
    tempo_init = clock();
    int i;
    for (i=0;i <BIGNUM;i++)
    {
        soma += f1(i);
    }
    tempo_fim = clock();
    tempo_gasto = (double) (tempo_fim - tempo_init)/CLOCKS_PER_SEC;
    printf("tempoo gasto na versao normal: %lf \n",tempo_gasto);
    tempo_init = clock();
    for( i=0;i<BIGNUM;i++)
    {
        soma += f2(i);
    }
    tempo_fim = clock();
    tempo_gasto = (double) (tempo_fim - tempo_init)/CLOCKS_PER_SEC;
    printf("tempoo gasto na versao bitwise: %lf \n",tempo_gasto);
    return 0;

}
