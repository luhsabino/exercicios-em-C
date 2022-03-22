#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex025 -Serviço Militar V2.0 >>>\n");
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int y = data ->tm_year + 1900;
    printf("Atualmente estamos no ano de %i.\n", y);
    int nasc;
    printf("Em que ano você nasceu? ");
    scanf("%i", &nasc);
    int idade = (y - nasc);
    printf("\n-----------------------------------\n");
    if (idade > 18) {
        printf("Sua idade atual é %i anos.\n", idade);
        printf("Seu alistamento foi em %i. Já se passaram %i anos.\n", (nasc + 18), (idade - 18));
    } else if (idade < 18) {
        printf("Sua idade atual é %i anos.\n", idade);
        printf("Seu alistamento será em %i. Ainda faltam %i anos.\n", (nasc + 18), (18 - idade));
    } else {
        printf("Sua idade atual é %i anos.\n", idade);
        printf("Você completa 18 anos exatamente em %i. Vá se alistar!\n", y);
    }

    printf("\n-----------------------------------\n");

    return 0;
}
