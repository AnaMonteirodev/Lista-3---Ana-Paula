#include <stdio.h>

int main() {
    char string[100];
    int tamanho = 0;

    // Solicita a entrada da string
    printf("Digite uma string: ");
    scanf("%s", string);

    // Percorre a string para contar os caracteres
    while (string[tamanho] != '\0') {
        tamanho++;
    }

    // Informa a quantidade de caracteres
    printf("A quantidade de caracteres na string é: %d\n", tamanho);

    return 0;
}
