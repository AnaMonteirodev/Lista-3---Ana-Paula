#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int comprimento, i;

    // Solicita a entrada da string
    printf("Digite uma string: ");
    scanf("%s", string);

    // Calcula o comprimento da string
    comprimento = strlen(string);

    // Imprime a string na forma inversa
    printf("A string inversa e: ");
    for (i = comprimento - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}
