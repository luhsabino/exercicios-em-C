#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome1[20], nome2[20], nome3[20];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;
    printf("Cadastrando a primeira pessoa: \n");
    printf("----------------------------------\n");
    __fpurge(stdin);
    printf("Nome: ");
    fgets(nome1, 20, stdin);
    printf("Sexo: [F/M] ");
    sexo1 = getchar();
    printf("Nota: ");
    scanf("%f", &nota1);
    printf("\nCadastrando a segunda pessoa: \n");
    printf("----------------------------------\n");
    __fpurge(stdin);
    printf("Nome: ");
    fgets(nome2, 20, stdin);
    printf("Sexo: [F/M] ");
    sexo2 = getchar();
    printf("Nota: ");
    scanf("%f", &nota2);
    printf("\nCadastrando a terceira pessoa: \n");
    printf("----------------------------------\n");
    __fpurge(stdin);
    printf("Nome: ");
    fgets(nome3, 20, stdin);
    printf("Sexo: [F/M] ");
    sexo3 = getchar();
    printf("Nota: ");
    scanf("%f", &nota3);
    printf("\n Listagem completa");
    printf("----------------------------------\n");
    printf("Nome           Sexo  Nota \n");
    printf("%-20s %c %6.1f \n", nome1, sexo1, nota1);
    printf("%-20s %c %6.1f \n", nome2, sexo2, nota2);
    printf("%-20s %c %6.1f \n", nome3, sexo3, nota3);
    printf("----------------------------------\n");

}
