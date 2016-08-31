#include <stdio.h>
    int main()
{
    int l1, l2, l3;
    
    printf("entre com l1: ");
        scanf("%d", &l1);
    printf("entre com l2: ");
        scanf("%d", &l2);
    printf("entre com l3: ");
        scanf("%d", &l3);
        
    if(l1==l2 && l2==l3 && l1==l3)
        printf("equilátero");
    if(l1==l2 && l1!=l3 || l1==l3 && l1!=l2)
        printf("isosceles");
    if(l1!=l2 && l1!=l3 && l2!=l3)
        printf("escaleno");
}    