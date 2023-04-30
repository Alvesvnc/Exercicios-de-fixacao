#include <stdio.h>
#include <string.h>

int main()
{
    int torcedores = 0, i = 0;
    char team[100];
    while (i <= 20) {
        printf("Qual o time que você torce?\n");
        scanf("%s", team);
        if (strcmp(team, "São_Paulo") == 0) {
            torcedores++;
        }
        i++;
    }
    printf("O número de torcedores do São Paulo é igual a %d\n", torcedores);
    return 0;
}
