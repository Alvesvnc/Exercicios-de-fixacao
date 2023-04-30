#include <stdio.h>

int main() {
   int num,soma_positivos,contagem=0;
   float positivos = 0, media;
   for (;;) {
      printf("Digite um numero:\t");
      scanf("%d", &num);
      if (num == 0) {
         break;
      } else {
         soma_positivos += num;
         contagem++;
      }
   }
   media = soma_positivos / contagem;
   printf("\nMédia dos números maiores que 0 e: %.2f\n", media);

   return 0;
}
