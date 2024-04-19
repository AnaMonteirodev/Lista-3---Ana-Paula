#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int vetor[3];
    int i;
    float media_aritmetica = 0, media_geometrica = 1;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera os números pseudoaleatórios e calcula a média aritmética e geométrica
    printf("Os numeros gerados sao: ");
    for (i = 0; i < 3; i++) {
        vetor[i] = rand() % 20; // Gera números no intervalo [0, 19]
        printf("%d ", vetor[i]);
        media_aritmetica += vetor[i];
        media_geometrica *= vetor[i];
    }
    printf("\n");

    media_aritmetica /= 3;
    media_geometrica = pow(media_geometrica, 1.0 / 3); // Calcula a raiz cúbica para a média geométrica

    // Exibe os resultados
    printf("A media aritmetica dos numeros gerados e: %.2f\n", media_aritmetica);
    printf("A media geometrica dos numeros gerados e: %.2f\n", media_geometrica);

    return 0;
}
