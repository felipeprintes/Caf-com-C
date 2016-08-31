#include <stdio.h>
    int main()
{
    int num, rest, bin= 0, pot10=1 ;
        
        printf("entre com um número: ");
            scanf("%d", &num);
            
          while(num>0)
          {
             rest = num%2;
             num = num/2;
             bin = bin + rest*pot10;
             pot10 = pot10*10;
          }
            
            printf("%d\n", bin);
    
    return 0;
}    