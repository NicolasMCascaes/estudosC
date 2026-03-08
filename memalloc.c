#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;

    printf("Quantos números deseja guardar?\n");
    scanf("%d", &tamanho);

    int *numeros = malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um número: \n");
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Números digitados: %d\n", numeros[i]);
    }
    
    

}