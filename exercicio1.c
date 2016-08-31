#include <stdio.h>
    int main()
{
    int sal[10],i, cont=0, contsal=0, porcent, media;
    
    for(i=0; i<10; i++)
    {
        printf("salario do funncionario %d: ", i+1);
            scanf("%d", &sal[i]);
            contsal++;
           
    }
     
     contsal=contsal+ sal[1800];
     media=contsal/1800;
     
     for(i=0; i<10; i++)
     {
         if(sal[i]>media)
         cont++;
         
     }
     porcent=cont*100/1800;
     
     
     printf("\nmedia salarial é %d", media);
     printf("\nporcentagem é %d", porcent);
}    