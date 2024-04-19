#include <stdio.h>

int main() {
    char string1[100], string2[100];
    int i, j;

    // Solicita a entrada das duas strings
    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    // Encontra o final da primeira string
    for (i = 0; string1[i] != '\0'; i++);

    // Concatena a segunda string à primeira
    for (j = 0; string2[j] != '\0'; j++) {
        string1[i++] = string2[j];
    }
    string1[i] = '\0';

    // Exibe a string concatenada
    printf("As strings concatenadas sao: %s\n", string1);

    return 0;
}
