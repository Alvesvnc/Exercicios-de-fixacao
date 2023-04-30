#include <stdio.h>

int main()
{
    int n,i=1;
    float soma = 0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        soma += 1.0/i;
        i++;
    }

    printf("O valor da soma é: %.3f", soma);
    return 0;
}
