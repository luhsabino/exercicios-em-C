#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex011 - Par ou Impar >>>\n");
    int a;
    printf("Digite um número qualquer: ");
    scanf("%i", &a);
    printf("O número que você digitou é %s.", (a % 2 == 0) ? "Par" : "Impar");

}
