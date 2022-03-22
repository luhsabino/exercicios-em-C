#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex023 - Positivo ou Negativo >>>\n\n");
    printf("Me diga um número e eu te direi se ele é POSITIVO, NEGATIVO ou NULO.\n\n");
    int n;
    printf("------------------------------------------\n");
    printf("Digite um número: ");
    scanf("%i", &n);
    if (n > 0) {
        printf("O número %i é POSITIVO.\n", n);
    } else if (n < 0) {
        printf("O número %i é NEGATIVO.\n", n);
    } else {
        printf("O número %i é NULO. \n", n);
    }
    printf("------------------------------------------\n");

    return 0;
}
