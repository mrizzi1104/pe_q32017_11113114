#include<stdio.h>


float *vet;
/************************************************************************************
*** Método: Particao()                                                            ***
*** Função: Metodo utilizado pelo Quick sort para ordenar uma particao do vetor   ***
*************************************************************************************/
int Particao(int p, int r, float Pop[])
{
	float pivo = Pop[p];
	int topo = p;
    int i;
	for ( i=p+1; i<=r; i++)
	{
		if (Pop[i] < pivo)
		{
			Pop[topo] = Pop[i];
			Pop[i] = Pop[topo+1];
			topo++;
		}
	}
	Pop[topo] = pivo;
	return topo;
}

/************************************************************************************
*** Método: QuickSort()                                                           ***
*** Função: Ordena a populacao                                         ***
*************************************************************************************/
void QuickSort(int p, int r,float Pop[])
{
	int q;
	if (p < r)
	{
		q = Particao(p,r,Pop);
		QuickSort(p, q-1,Pop);
		QuickSort(q+1, r,Pop);
	}
}




int main()
{
    int n;
    scanf("%d",&n);
    vet = (float*) malloc( n*sizeof(float));
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&vet[i]);
    }
    QuickSort(0,n-1,vet);
    if(n%2==0)
    {
        printf("%.2f\n",vet[n/2]);
    }
    else
        printf("%.2f\n",vet[((n-1)/2)]);
}


