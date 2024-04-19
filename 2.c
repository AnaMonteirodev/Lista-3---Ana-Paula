#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char caractere;
    int i, encontrado = 0;

    // Solicita a entrada da string
    printf("Digite uma string: ");
    scanf("%s", string);

    // Solicita a entrada do caractere
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    // Percorre a string para verificar se o caractere está presente
    for (i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) {
            encontrado = 1;
            break;
        }
    }

    // Informa o resultado
    if (encontrado) {
        printf("O caractere '%c' foi encontrado na string.\n", caractere);
    } else {
        printf("O caractere '%c' nao foi encontrado na string.\n", caractere);
    }

    return 0;
}
