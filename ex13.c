#include <stdio.h>
    int main()
{
    int p, sal, media, cont1=0; cont2=0, pt=0;
    char sexo;
    
        printf("homem ou mulher: ");
            scanf("%c", &sexo);
    
    if(sexo=='M' || sexo=='m')
        cont1++;
    do    
    {
        printf("entre com seu peso: ");
            scanf("%d", &p);
        pt = pt+p;
        media = pt/cont1;
        
    }
    
    while(sexo=='M' || sexo=='m');
    return 0;
}    