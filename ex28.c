#include <stdio.h>
    int main()
{
    int num, i, mult;
    
    printf("\nentre com um número: ");
        scanf("%d", &num);
        
        
        
    for(i=0; i<10; i++)
    {
        mult=num*i;
        printf("\n%d X %d = %d", num, i, mult);
    }
}    