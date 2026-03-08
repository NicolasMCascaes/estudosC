#include <stdio.h>

int main(){
    int numero = 19;
    int *ponteiro = &numero;
    printf("Valor do número: %d\n", numero);
    printf("Endereço da variável: %p\n", &numero);
    printf("Valor do ponteiro: %p\n", ponteiro);
    printf("Valor do número apontado pelo ponteiro: %d\n", *ponteiro);

    printf("Digite um novo número: \n");
    scanf("%d", ponteiro);
    printf("Novo número: %d", numero);
    return 0;
}