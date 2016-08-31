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
  if(nome[x]=='#' )
  {
   soma++;
  } 
 }
 printf("\n O nome tem %d caracteres: ",t);
 printf("\n O nome tem %d hash: ",soma);
 }