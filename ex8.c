#include <stdio.h>
    int main()
{
    int cand1, cand2, cont=0, voto;
    char resp;
    
    do{
        printf("qual seu candidato: ");
            scanf("%d", &voto);
        
        if(voto==cand1)
            cont++;
        if(voto==cand2)
            cont++;
       printf("deseja continuar: ");
            scanf(" %c", &resp);
            
    }    
       while(resp=='s'); 
       
            
}    