#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex017 - Fila de banco >>>\n");
    int ano;
    printf("Em que ano você nasceu? ");
    scanf("%i", &ano);
    printf("\n------------------------------\n");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int y = data->tm_year + 1900;
    int nasc = y - ano;
    printf("Você tem %i anos, certo?\n", nasc);
    printf("Seja bem-vindo(a) ao Banco Estudonauta.\n");
    if (nasc >= 65){
        printf("\n=== ATENÇÃO! DIRIJA-SE A FILA PREFERENCIAL! ===");
    }
    printf("\n------------------------------\n");
}
