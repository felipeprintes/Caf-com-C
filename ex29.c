#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
 char nome[20];
 int x,t,soma=0;
 float percent;
 printf("Digite um nome: ");
 gets(nome);
 t=strlen(nome); // pega o tamanho do nome.. 
 for(x=0;x<=t;x++)
 {
  if(nome[x]=='a' || nome[x]=='A' || nome[x]=='e' || nome[x]=='E' || nome[x]=='i' || nome[x]=='I' || nome[x]=='o' || nome[x]=='O' || nome[x]=='u' || nome[x]=='U')
  {
   soma++;
  } 
 } 
 printf("\n O nome tem %d caracteres: ",t);
 printf("\n O nome tem %d vogais: ",soma);
 
 //Este for vai calcular o percentual de vogais no nome.
 for(x=0;x<=t;x++)
 {
  percent=soma*100/t;
 }
 printf("\n %1.1f porcento do nome %s sao vogais: \n\n",percent, nome);
 
 return(0);
}