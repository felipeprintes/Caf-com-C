#include <stdio.h>
    int main()
{
    int num1=0, num2=1, troca, cont, ord;
    
        printf("entre com a ordem da sequencia: ");
            scanf("%d", &ord);
            
            for(cont=0; cont<ord; cont++)
            {
                printf("%d-", num1);
                troca=num1;
                num1=num2;
                num2=troca+num2;
            }
            
    return 0;      
    
}