#include <stdio.h>

struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
};

int main(){
    struct Pessoa pessoa1;

    printf("Digite um nome: \n");
    scanf("%s", &pessoa1.nome);

    printf("Digite uma idade: \n");
    scanf("%d", &pessoa1.idade);

    printf("Digite uma altura: \n");
    scanf("%f", &pessoa1.altura);

    printf("Nome da pessoa: %s \n", pessoa1.nome);
    printf("Idade da pessoa: %d \n", pessoa1.idade);
    printf("Altura da pessoa: %.2f \n ", pessoa1.altura);

    return 0;
}