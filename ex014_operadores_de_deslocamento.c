#include <stdio.h>

void main() {
    printf("<<< EX 014 - Operadores de deslocamento >>>\n");
    int n1, n2;
    printf("Digite um número: ");
    scanf("%i", &n1);
    printf("Digite o deslocamento: ");
    scanf("%i", &n2);
    printf("\n---------- OPERAÇÕES SHIFT ----------\n ");
    int rs = n1 >> n2;
    printf("Calculando %i >> %i é igual a %i.\n", n1, n2, rs);
    int ls = n1 << n2;
    printf("Calculando %i << %i é igual a %i.", n1, n2, ls);
}
