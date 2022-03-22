#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Potuguese");
    printf("<<< Ex022 - Dá para ver o filme? >>>\n");
    printf("\n=============== CINEMA ESTUDIONAUTA ===============\n");
    int hor = 19;
    int din = 20;
    printf("\nHORÁRIO DO FILME %ih - Preço do ingresso: R$%i\n", hor, din);
    printf("\n---------------------------------------------------\n");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int h = data ->tm_hour;
    int cash;
    printf("Quanto dinheiro você tem? ");
    scanf("%i", &cash);
    if (cash < din && hor >= h) {
        printf("Agora são %i horas.\n", h);
        printf("Infelizmente não é possível comprar o ingresso!\n");
    } else {
        printf("Agora são %i horas.\n", h);
        printf("Você consegue comprar o ingresso!\n");
    }

    return 0;
}
