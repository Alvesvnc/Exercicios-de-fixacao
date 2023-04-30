#include <stdio.h>
#include <string.h>
int main()
{
 char nome[100],sexo[4];
 int idade,mulheres=0,controle;
 float media,aux;
 for(;;){
 printf("Digite o seu primeiro nome:\t");
 scanf("%s",nome);
 printf("\nDigite a sua idade:\t");
 scanf("%d",&idade);
 printf("\nQual o seu gênero [f/m]:\t");
 scanf("%s",sexo);
 controle++;
 if(idade<0){
     break;
}
 else{
     controle++;
     aux+=idade;
 }
 if(strcmp(sexo,"f")==0){
 mulheres++;
 }
 media=aux/controle;
 }
 printf("A quantidade de mulheres é:\t%d",mulheres);
 printf("\nA idade media é de \t%.2f",media);
 return 0;
}