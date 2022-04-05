#include <stdio.h>
#include <locale.h>

    void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Cálculo de IMC >>>\n");
    char nome[20];
    printf("Seu nome: ");
    fgets(nome, 20, stdin);
    float peso;
    printf("Seu peso:(Kg) ");
    scanf("%f", &peso);
    float altura;
    printf("Sua altura:(m) ");
    scanf("%f", &altura);
    float imc = peso/(altura*altura);
    printf("Olá %s.\nSeu peso é %.2f Kg, seu altura é %.2f.\n", nome, peso, altura);
    printf("Seu IMC é %.2f.\n", imc);
    if(imc < 18.5){
        printf("Você está abaixo do peso!\n");
    } else if(imc >= 18.5 && imc <= 24.9) {
        printf("Seu peso está normal!\n");
    } else if(imc >= 25.00 && imc <= 29.9) {
        printf("Você esta em pré-obesidade, procure seu nutricionista.\n");
    } else if(imc >= 30.0 && imc <= 34.9){
        printf("Você está em obesidade Grau 1, procure seu nutricionista.\n ");
    } else if(imc >= 35.0 && imc <= 39.9){
        printf("Você está em obesidade Grau 2, procure seu nutricionista.\n ");
    } else {
        printf("Você está em obesidade Grau 3, procure seu nutricionista.\n ");
    }
}
