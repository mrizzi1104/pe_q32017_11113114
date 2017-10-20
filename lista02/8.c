#include<stdio.h>
#include<stdlib.h>
#include<math.h>


double descontos (int faltas,double hora)
{
    return faltas*(hora);
}

double acrescimos (int extra,double hora)
{
    double acre = 40*extra;
    acre+= extra*hora;
    return acre;
}
void main()
{
    int id[5]={1,2,3,4,5};
    double mes[5]={(10000/20),(8000/20),(5000/20),(3000/20)};
    double hora[5] = { (mes[0]/8), (mes[1]/8), (mes[2]/8), (mes[3]/8), (mes[4]/8) };
    double salario=0.00;
    int faltas,extras,ids;
    scanf("%d %d %d",&ids,&faltas,&extras);
    salario -= descontos (faltas,mes[ids-1]);
    salario += acrescimos (extras,hora[ids-1]);
    salario += hora[ids-1]*8*20;
    printf("%f\n",salario);
}
