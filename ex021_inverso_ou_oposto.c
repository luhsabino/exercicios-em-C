#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex021 - Inverso ou oposto >>>\n");
    float n;
    printf("Digite um número: ");
    scanf("%f", &n);

    if (n > 0) {
        printf("O inverso do número %.1f é %.1f.", n, (1/n));
    } else {
        printf("O oposto do número %.1f é %.1f.", n, (n*-1));
    }
}
