#include <stdio.h>
#include <locale.h>

void main ( ) {
    setlocale (LC_ALL, "Portuguese");
    int n1, n2, n3;
    printf ("Primeiro número: ");
    scanf ("%d", &n1);
    printf ("Segundo número: ");
    scanf ("%d", &n2);
    printf ("Terceiro número: ");
    scanf ("%d", &n3);

    if (n1<n2 && n1<n3 && n2<n3) {
        printf("MAIOR: %d\n", n3);
        printf("INTERMEDIARIO: %d\n", n2); //NUMERO 1 SERÁ O MENOR, NUMERO 2 SERÁ INTERMEDIÁRIO, NUMERO 3 SERÁ O MAIOR
        printf("MENOR: %d\n", n1);
    }else if(n2<n1 && n2<n3 && n1<n3){ // NUMERO 2 SERÁ O MENOR, NUMERO 1 SERÁ O INTERMEDIÁRIO, NUMERO 3 SERÁ O MAIOR
        printf("MAIOR: %d\n", n3);
        printf("INTERMEDIARIO: %d\n", n1);
        printf("MENOR: %d\n", n2);
    }else if(n3<n1 && n3<n2 && n2<n1){ // NUMERO 3 SERÁ O MENOR, NUMERO 2 SERÁ O INTERMEDIÁRIO, NUMERO 1 SERÁ O MAIOR
        printf("MAIOR: %d\n", n1);
        printf("INTERMEDIARIO: %d\n", n2);
        printf("MENOR: %d\n", n3);
    }else if(n1<n2 && n1<n3 && n3<n2){
        printf("MAIOR: %d\n", n2);
        printf("INTERMEDIARIO: %d\n", n3); // NUMERO 1 SERÁ O MENOR, NUMERO 3 SERÁ O INTERMEDIÁRIO, NUMERO 2 SERÁ O MAIOR
        printf("MENOR: %d\n", n1);
    }else if(n3<n1 && n3<n2 && n1<n2){
        printf("MAIOR: %d\n", n2);
        printf("INTERMEDIARIO: %d\n", n1); //NUMERO 3 SERÁ O MENOR, NUMERO 1 SERÁ O INTERMEDIÁRIO, NUMERO 2 SERÁ O MAIOR
        printf("MENOR: %d\n", n3);
    }

}
