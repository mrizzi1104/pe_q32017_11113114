#include<stdio.h>

struct lista
   {
      char nome[100];
      int num;
      float p1,p2,p3;
   };

void main()
   {
       struct lista sala[50];
       FILE *arq;
       arq = fopen("lista_aluno.txt","r");
       if (!arq)
           {
               printf("O Arquivo %s nao pode ser aberto.\n");
               getchar();
           }
       int i;
       float media[50];
       for(i=0;i<50;i++)
       {
            fscanf(arq,"%s %d %f %f %f\n",&sala[i].nome,&sala[i].num,&sala[i].p1,&sala[i].p2,&sala[i].p3);
            media[i]= (sala[i].p1 + sala[i].p2 + sala[i].p3)/3;

       }
       fclose(arq);

       FILE *arquivo;

	   arquivo = fopen("notas.txt","w+");

	   if (!arquivo)
	      {
		     printf("\n\nErro ao abrir o arquivo .txt!!!");
		     getchar();
		     exit(1);
	      }

       for(i=0;i<50;i++)
       {
            fprintf(arquivo,"%s %d %.2f\n",sala[i].nome,sala[i].num,media[i]);
       }
       fclose(arquivo);
}
