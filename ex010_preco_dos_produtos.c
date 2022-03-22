#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex010 Preço do Produto >>>\n");
    char nome[20];
    printf("Nome do produto: ");
    scanf("%s", &nome);
    float preco;
    printf("Preço de %s: R$ ", nome);
    scanf("%f", &preco);
    float desconto;
    printf("Desconto: (%%) ");
    scanf("%f", &desconto);
    float custo = preco - (preco * desconto / 100);
    printf("O produto %s custava R$ %.2f, mas com o desconto de %.2f%%, passa a custar R$ %.2f.", nome, preco, desconto, custo);

}
