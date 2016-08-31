#include <stdio.h>
    int main()
{
    int idade;
    char resp;
     do
     {
        printf("entre com a idade: ");
            scanf("%d", &idade);
        
        if(idade<16)
        printf("\nvocê não pode votar");
        if(idade>=16 && idade<18 || idade>70)
        printf("\nvocê pode votar se quiser");
        if(idade>=18 && idade<=70)
        printf("\nvocê é obrigado a votar");
      
      printf("\ndeseja continuar perguntando (s/n): ");
        scanf(" %c", &resp);
     } 
     
     while(resp=='s');
}    