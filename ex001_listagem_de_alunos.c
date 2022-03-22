#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\tListagem de Alunos\n");
    printf("Nome \t \t \t Nota\n");
    printf("-----------------------------\n");
    printf("Ana Beatriz \t \t 8.5\n");
    printf("Bianca Martins \t \t 9.0\n");
    printf("Cláudio Sá\t \t 5.5\n");
    printf("Giovana Silva\t \t 7.5\n");
    printf("-----------------------------\n");
}
