#include<stdio.h>

int main()
{
    int i,j;
    int entrada[3][3],saida[3][3];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&entrada[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            saida[i][j]=entrada[j][i];
            printf("%d ",saida[i][j]);
        }
        printf("\n");
    }
}
