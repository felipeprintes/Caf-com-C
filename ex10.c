#include <stdio.h>
    int main()
{
    int a, b, c, mn;
    char resp;
    do
    {
        printf("\nentre com a: ");
            scanf("%d", &a);
        printf("\nentre com b: ");
            scanf("%d", &b);
        printf("\nentre com c: ");
            scanf("%d", &c);    
        
        if(a > mn)
            mn = a; 
        if(b > a)
            mn = b;
        if(c > b)
            mn = c;
        if(c > a)
            mn = c;
        
        printf("deseja continuar (s/n): ");
            scanf(" %c", &resp);
    }
    while(resp=='s');
        printf("o maior número é %d", mn);    
}    