#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Antecessor e Sucessor >>>\n");
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    int a = n - 1;
    int s = n + 1;
    printf("Analisando o número %i, seu antecessor é %i e seu sucessor é %i.", n, a, s);

    /*int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    printf("Analisando o número %i, seu antecessor é %i e seu sucessor é %i.", n, (n-1), (n+1));*/
}
