#include <stdio.h>
    int main()
{
    int idade, ano, nascimento;
    
        printf("qual a data do seu nascimento: ");
            scanf("%d", &nascimento);
        printf("em que ano você esta: ");
            scanf("%d", &ano);
            
        idade= ano - nascimento;
        printf("sua idade é %d", idade);
    return 0;
}    