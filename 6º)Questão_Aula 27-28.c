#include <stdio.h>

int main()
{
    float num, aux;
    int controle;
    printf("Digite o numero que você quer saber o fatorial:\n");
    scanf("%f", &num);
    aux = num;
    controle = num - 1;
    while (controle > 0) {
        aux *= controle;
        controle--;
    }
    printf("O fatorial de %.2f é: %.2f", num, aux);
    return 0;
}
