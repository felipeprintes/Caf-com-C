#include <stdio.h>
    int main()
{
    int i, j , tab, num[4][4];
    
        printf("\nMENU");
        printf("\n_______________");
        printf("\n1)DIAGONAL PRINCIPAL");
        printf("\n2)DIAGONAL SECUNDÁRIA");
        printf("\n0)FIM");
        printf("\n_______________\n");
        
        for(j=0; j<4; j++)
            {
                for(i=0; i<4; i++)
                {
                    printf("entre com a linha %d e coluna %d: ",j+1, i+1);
                        scanf("%d", &num[j][i]);
                }
            }
            
            for(j=0; j<4; j++)
            {
                
                for(i=0; i<4; i++)
                    if(i==j)
                {
                   printf("%d\n", num[j][i]);
                        for(tab=1; tab<=i+1; tab++)
                     {
                            printf(" ");
                     }
                }
                
            }    
            
    
    
    return 0;
}    