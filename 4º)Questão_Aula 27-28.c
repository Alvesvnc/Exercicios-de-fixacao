#include <stdio.h>

int main() {
   int num,soma_positivos,contagem=0;
   float positivos = 0, media;
   
   printf("Digite um numero:\t");
   scanf("%d", &num);
   while(num != 0) {
      soma_positivos += num;
      contagem++;
      printf("Digite um numero:\t");
      scanf("%d", &num);
   }
   
   media = soma_positivos / contagem;
   printf("\nMédia dos números maiores que 0 e: %.2f\n", media);

   return 0;
}
