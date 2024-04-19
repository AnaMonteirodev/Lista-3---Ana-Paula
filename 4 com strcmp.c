#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    // Solicita a entrada das duas strings
    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    // Verifica se as strings são iguais usando a função strcmp()
    if (strcmp(string1, string2) == 0) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
