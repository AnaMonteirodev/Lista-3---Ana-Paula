#include <stdio.h>
int main(){
    float vetor[15];
    float soma;

    for (int i=0; i<15; i++){
       printf("Digite o valor: ", i+1);
       scanf("%f", &vetor[i]);
    }
    float menor = vetor[0];
    float maior = vetor[0];
    for (int i = 1; i <15; i++) {
      if (vetor[i] < menor) {
          menor = vetor[i];
      }
      if (vetor[i] > maior) {
          maior = vetor[i];
      }
  }
  soma=menor+maior;
  
  printf("O menor valor é: %.2f\n", menor);
  printf("O maior valor é: %.2f\n", maior);
  printf("A soma do menor e maior valor é: %.2f\n", soma);
}
