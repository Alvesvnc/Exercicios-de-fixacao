#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100],sexo[4];
    int idade,mulheres=0,controle=0;
    float media=0.0,aux=0.0;

    do {
        printf("Digite o seu primeiro nome:\t");
        scanf("%s",nome);
        printf("\nDigite a sua idade:\t");
        scanf("%d",&idade);
        printf("\nQual o seu gênero [f/m]:\t");
        scanf("%s",sexo);
        if (idade >= 0) {
            controle++;
            aux += idade;
            if (strcmp(sexo,"f")==0) {
                mulheres++;
            }
        }
    } while (idade >= 0);

    if (controle > 0) {
        media = aux / controle;
    }
    printf("A quantidade de mulheres é:\t%d\n",mulheres);
    printf("A idade média é de \t%.2f\n",media);
    return 0;
}
