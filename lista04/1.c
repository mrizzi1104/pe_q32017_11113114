#include<stdio.h>
#include<math.h>

struct espaco {
   float x;
   float y;
   float z;
};

float distancia ( struct espaco p1,struct  espaco p2)
{
    float d;
    d = pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2) + pow((p2.z - p1.z),2);
    return sqrt(d);
}

void main()
{
   struct espaco p1,p2;
   scanf("%f , %f , %f",&(p1.x),&(p1.y),&(p1.z)) ;
   scanf("%f , %f , %f",&(p2.x),&(p2.y),&(p2.z)) ;
   float d =  distancia(p1,p2);
   printf("%.2f",d);
}
