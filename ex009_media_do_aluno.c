#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex009 Média do aluno >>>\n");
    char nome[20];
    float nota1, nota2;
    printf("Nome do aluno: ");
    scanf("%s", &nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    float m = (nota1 + nota2) / 2;
    printf("O Aluno %s tirou as notas %.1f e %.1f e ficou com a média %.1f", nome, nota1, nota2, m);

}
