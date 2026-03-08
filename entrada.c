#include <stdio.h>

int main(){
    int idade;
    float altura;
    char inicial;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);

    printf("Você tem %d anos, mede %.2f metros e a inicial do seu nome é %c", idade, altura, inicial);

    return 0;
}