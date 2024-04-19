#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    // Solicita a entrada das duas strings
    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    // Concatena as duas strings usando a função strcat()
    strcat(string1, string2);

    // Exibe a string concatenada
    printf("As strings concatenadas sao: %s\n", string1);

    return 0;
}
