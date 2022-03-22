#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL ,"Portuguese");
    printf("<<< Ex018 - Serviço Militar V1.0 >>>\n");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int y = data->tm_year + 1900;
    printf("Estamos no ano de %i.\n", y);
    int nasc;
    printf("Em que ano você nasceu? ");
    scanf("%i", &nasc);
    printf("\n---------------------------------------------\n");
    int idade = y - nasc;
    printf("Sua idade atual é %i anos.\n", idade);
    if (idade > 18) {
        printf("Já fez 18 anos. Espero sinceramente que tenha se alistado.");
    } else {
        printf("Vocẽ ainda não fez 18 anos. Não pode se alistar.");
    }
    printf("\n---------------------------------------------\n");


}
