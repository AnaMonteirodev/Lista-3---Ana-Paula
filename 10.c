#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[3][3];
    int i, j, x, contador = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche a matriz com números aleatórios
    printf("Matriz gerada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 10; // Gera números aleatórios de 0 a 9
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Solicita ao usuário um valor inteiro
    printf("\nDigite um valor inteiro para verificar quantas vezes ele aparece na matriz: ");
    scanf("%d", &x);

    // Conta quantas vezes x aparece na matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == x) {
                contador++;
            }
        }
    }

    // Apresenta o resultado
    printf("O valor %d aparece %d vezes na matriz.\n", x, contador);

    return 0;
}
