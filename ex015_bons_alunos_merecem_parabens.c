#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex015 - Bons alunos merecem parabéns >>>\n");
    float n1, n2;
    printf("Digite a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);
    printf("\n--------------------------------------------\n");
    float media = (n1+n2) / 2;
    if (media >= 7) {
        printf("MEUS PARABÉNS!!!");
    }
    printf(" A sua média final foi %.1f.", media);
    printf("\n--------------------------------------------\n");
}
