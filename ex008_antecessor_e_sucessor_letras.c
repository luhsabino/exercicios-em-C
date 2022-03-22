#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char n;
    printf("Digite uma letra: ");
    scanf("%c", &n);
    char a = n - 1;
    char s = n + 1;
    printf("Antes da letra %c, temos a letra %c. Depois temos a letra %c.", n, a, s);

}
