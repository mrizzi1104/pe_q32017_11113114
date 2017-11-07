#include<stdio.h>

int main()
{
    int *vet;
    int n;
     scanf("%d",&n);
    vet= (int *) malloc(n*sizeof(int));
    int i;
    for ( i=0;i<n;i++)
    {
        scanf("%d",&vet[i]);
    }
    int *vet2;
    vet2= (int *) malloc(n*sizeof(int));
    int cont=0,j=0;
    int certo=1;
    for(i=0;i<n;i++)
    {
        /* verifica se ja foi computado o numero */
        j=0;
        certo=1;  ///se nao tem repeticao
        while(j<(cont+1))
        {
             if(vet2[j]==vet[i])   ///se tem impede de por
               {
                   certo=0;
                   j=cont+1;
               }
             j++;
        }
        if(certo==1)
             {
                 vet2[cont]=vet[i];
                 cont++;
             }
    }

    int conta[cont];
    for (i=0;i<cont;i++)
    {
        conta[i]=0;
        for (j=0;j<n;j++)
        {
            if(vet[j] == vet2[i])
            {
                conta[i]++;
            }
        }
        printf("%d-%d ",vet2[i],conta[i]);
    }
    printf("\n");


    free(vet);
    free(vet2);
    return 0;
}
