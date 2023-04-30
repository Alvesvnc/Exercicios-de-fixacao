#include <stdio.h>

int main(){
    int a1, a2, i = 3, k = 0;
    
    printf("Insira o primeiro termo da sequencia:");
    scanf("%d", &a1);
    printf("Insira o segundo termo da sequencia:");
    scanf("%d", &a2);
    
    while (i < 11) {
        if (i % 2 == 0) {
            k = a1 - a2;
        } else {
            k = a1 + a2;
        }
        a1 = a2;
        a2 = k;
        printf("%d\n", k);
        i++;
    }
    
    return 0;
}
