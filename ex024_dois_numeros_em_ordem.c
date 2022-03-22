#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("<<< Ex024 - Ordem em dois números. >>>\n\n");
    printf("Me diga dois números e eu colocarei em ordem crescente.\n");
    printf("Primeiro número: ");
    scanf("%i", &n1);
    printf("Segundo número número: ");
    scanf("%i", &n2);
    if (n1 < n2) {
        printf("Os números em ordem são %i e %i.", n1, n2);
    } else {
        printf("Os números em ordem são %i e %i.", n2, n1);
    }
}
