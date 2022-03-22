#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n========== SUPER TABUADA =========\n");
    printf("+           Adição\n");
    printf("-           Subtração\n");
    printf("*           Multiplicação\n");
    printf("/           Divisão\n");
    printf("==================================\n");
    char sinal;
    printf("Digite uma opção -> ");
    fflush(stdin);
    scanf("%c", &sinal);
    int n1, n2;
    printf("Valor 1 = ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Valor 2 = ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("\n-----------------------------------\n");
    switch (sinal) {
    case '+':
        printf("O resultado de %i + %i é igual a %i.", n1, n2, (n1 + n2));
        break;
    case '-':
        printf("O resultado de %i - %i é igual a %i.", n1, n2, (n1 - n2));
        break;
    case '*':
        printf("O resultado de %i * %i é igual a %i.", n1, n2, (n1 * n2));
        break;
    case '/':
        printf("O resultado de %i / %i é igual a %i.", n1, n2, (n1 / n2));
        break;
    default:
        printf("Não foi possível fazer a operação. Tente novamente.");
        break;

    }

    printf("\n-----------------------------------\n");
    printf("\nVOLTE SEMPRE\n");

    return 0;
}

