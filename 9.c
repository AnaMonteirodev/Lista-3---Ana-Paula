#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    // Solicita ao usuário que insira os elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Apresenta os elementos da diagonal principal
    printf("Os elementos da diagonal principal sao:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
