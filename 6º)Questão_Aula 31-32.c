#include <stdio.h>

int main()
{
    float num, aux;
    int controle = 1;
    
    printf("Digite o número que você quer saber o fatorial:\n");
    scanf("%f", &num);
    
    aux = num;
    
    do {
        aux *= controle;
        controle++;
    } while(controle <= num-1);
    
    printf("O fatorial de %.2f é igual a %.2f", num, aux);
    
    return 0;
}
