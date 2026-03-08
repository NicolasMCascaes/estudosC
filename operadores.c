#include <stdio.h>

int main(){
    int x;
    int y;
    printf("Escreva dois números:");
    scanf(" %d", &x );
    scanf("%d", &y );

    printf("Soma: %d\n", x+y);
    printf("Subtração: %d\n", x-y);
    printf("Divisão: %d\n", x/y);
    printf("Multiplicação: %d\n", x*y);
    printf("Resto: %d\n", x%y);

    printf("O primeiro número é maior que o segundo? Resposta: %d", x>y);
}