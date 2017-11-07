#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char entrada[255];
    fgets(entrada,255,stdin);
    char saida[255];
    int t = strlen (entrada);
    t--;
    for(i=0;i<=t;i++)
    {
        saida[i] = entrada[(t-i)];
        printf("%c",saida[i]);
    }
    printf("\n");


    return 0;
}
