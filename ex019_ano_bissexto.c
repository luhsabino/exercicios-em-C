#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Exercício 019 - Ano Bissexto >>>\n");
    int ano;
    printf("Digite um ano qualquer: ");
    scanf("%i", &ano);
    printf("\n--------------------------------------------\n");
    if (ano % 4 == 0 && ano % 100 !=0 || ano % 400 == 0) {
			printf("O ano %i é BISSEXTO!\n", ano);
		} else {
			printf("O ano %i não é BISSEXTO!\n", ano);
		}
    printf("--------------------------------------------\n");
}
