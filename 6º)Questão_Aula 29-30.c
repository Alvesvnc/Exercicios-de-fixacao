#include <stdio.h>

int main()
{
float num,aux;
int controle;
printf("Digite o numero que você quer saber o fatorial:\n");
scanf("%f",&num);
aux=num;
for(controle=num-1;controle>0;controle--){
    aux*=controle;
}
printf("essa porra deu %.2f",aux);
return 0;
}