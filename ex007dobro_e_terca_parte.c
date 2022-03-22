#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex007 Dobro e terça parte >>>\n");
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    int d = n * 2;
    float t = (float)n / 3;
    printf("Analisando o número %i, seu dobro é %i e sua terça parte é %.2f", n, d, t);
}
