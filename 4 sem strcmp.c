#include <stdio.h>

int main() {
    char string1[100], string2[100];
    int i, iguais = 1;

    // Solicita a entrada das duas strings
    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    // Verifica se as strings são iguais sem usar strcmp()
    for (i = 0; string1[i] != '\0' || string2[i] != '\0'; i++) {
        if (string1[i] != string2[i]) {
            iguais = 0;
            break;
        }
    }

    // Informa o resultado
    if (iguais) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
