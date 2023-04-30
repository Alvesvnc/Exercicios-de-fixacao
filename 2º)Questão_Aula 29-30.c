#include <stdio.h>
#include <string.h>

int main()
{
int torcedores=0,i=0;
char team[100];
for(i;i<=20;i++){
    printf("Qual o time que você torce?\n");
    scanf("%s",team);
if(strcmp(team,"São_Paulo")==0){
    torcedores++;
}
}
printf("o numero de torcedores do São Paulo é igual a %d",torcedores);
}