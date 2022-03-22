#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex020 - Preço da Passagem >>>\n\n");
    printf("=============== TABELA DE PREÇO ===============\n");
    printf("Viagens até 200km           R$0.50/km");
    printf("\nViagens a partir 200km      R$0.35/km");
    printf("\n-----------------------------------------------\n");
    int d;
    printf("Distância total da viagem, em km: ");
    scanf("%i", &d);

    printf("\n-----------------------------------------------\n");
    if (d < 200) {
        printf("Uma viagem de %iKm vai custar R$0.50/km.\n", d);
        printf("Valor total da viagem R$%.2f.", (d*0.50));
    } else {
        printf("Uma viagem de %iKm vai custar R$0.35/km.\n", d);
        printf("Valor total da viagem R$%.2f.", (d*0.35));
    }
    printf("\n===============================================\n");

    printf("Boa viagem...\n");
}

