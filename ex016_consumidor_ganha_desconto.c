#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex016 - Consumidor ganha desconto >>>\n\n");
    float compra;
    printf("Qual foi o valor total das compras? R$");
    scanf("%f", &compra);
    printf("\nVocê comprou R$%.2f em nossa loja.\n", compra);
    float desconto = compra * 10/100;
    float total = compra - desconto;
    if (compra > 500.00) {
        printf("\n============== ATENÇÃO ==============\n");
        printf("Por fazer mais de R$500.00 em compras, você vai receber R$%.2f de desconto.\n", desconto );
        printf("O valor a ser pago é R$%.2f.\n", total);

    }
    printf("Volte sempre!");
    printf("\n-------------------------------------");

    return 0;

}
