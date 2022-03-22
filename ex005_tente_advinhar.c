#import <stdio.h>
#import <stdlib.h>
#import <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX005 - Será que você acerta? >>>\n");
    printf("Vou pensar em um numero de 1 a 5. Tente advinhar!\n");
    int n;
    printf("Qual é o seu palpite? ");
    scanf("%d", &n);
    srand(time(NULL));
    int b = rand() %5 + 1;
    printf("Eu pensei no número (%d) e você pensou no número (%d)", b , n);
}
