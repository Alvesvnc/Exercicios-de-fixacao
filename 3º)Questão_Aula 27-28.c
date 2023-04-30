#include <stdio.h>

int main()
{
    int i = 0;
    float media, n1, n2, n3;

    while (i <= 40) {
        printf("Digite a primeira nota do aluno:");
        scanf("%f", &n1);
        printf("Digite a segunda nota do aluno:");
        scanf("%f", &n2);
        printf("Digite a terceira nota do aluno:");
        scanf("%f", &n3);
        media = (n1 + n2 + n3) / 3;
        printf("A media do aluno foi de %.2f\n\n", media);
        i++;
    }
    return 0;
}
