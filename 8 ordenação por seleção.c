#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int vetor[], int tamanho) {
    int i, j, min, temp;

    for (i = 0; i < tamanho - 1; i++) {
        min = i;
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = temp;
        }
    }
}

int main() {
    int vetor[100];
    int intervalo_min, intervalo_max, i;

    // Solicita ao usuário os limites do intervalo
    printf("Digite o limite inferior do intervalo: ");
    scanf("%d", &intervalo_min);
    printf("Digite o limite superior do intervalo: ");
    scanf("%d", &intervalo_max);

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o vetor com números pseudoaleatórios dentro do intervalo definido
    for (i = 0; i < 100; i++) {
        vetor[i] = rand() % (intervalo_max - intervalo_min + 1) + intervalo_min;
    }

    // Ordena o vetor utilizando o método de ordenação por seleção
    selectionSort(vetor, 100);

    // Apresenta o vetor ordenado
    printf("Vetor ordenado (crescente):\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
