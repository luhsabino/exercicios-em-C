#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    __fpurge(stdin);
    int y;
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    __fpurge(stdin);
    printf("\n---------- OPERAÇÕES BITWISE ----------\n");
    int c = x & y;
    printf("Calculando %d & %d é igual a %d\n", x, y, c);
    int d = x | y;
    printf("Calculando %d | %d é igual a %d\n", x, y, d);
    int de = x ^ y;
    printf("Calculando %d ^ %d é igual a %d", x, y, de);
}
