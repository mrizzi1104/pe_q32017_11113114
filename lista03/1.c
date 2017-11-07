#include<stdio.h>
#include<string.h>

int main()
{
    int j,cont=0;
    char entrada[255];
    fgets (entrada,255,stdin);
    int t = strlen(entrada);
    for ( j=0; j<(t-1); j++)
    {
         if (entrada[j] == 'a' || entrada[j] == 'e' ||  entrada[j] == 'i' ||  entrada[j] == 'o' ||  entrada[j] == 'u' )
            cont++;
    }
    printf("%d\n",cont);
    return 0;
}
