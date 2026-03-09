#include <stdio.h>

int main(){
    int numeros[6];
    printf("Digite 6 números\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Número %d\n", i);
        scanf("%d", &numeros[i]);
    }
    printf("Número: %d", *(numeros + 1));
    int *ptr = numeros;
    int resultado = 0;
    for (int i = 0; i < 6; i++)
    {
        resultado += *(ptr + i);
    }
    printf("Resultado: %d\n", resultado);
    
    
}