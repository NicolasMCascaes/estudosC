#include <stdio.h>

int main(){
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ptr = numeros;
    printf("Numero: %d\n", *(ptr + 1));
    for (int i = 0; i < 5; i++)
    {
        printf("Valor: %d, Endereço: %p\n",*(ptr + i), ptr + i);
    }
    
}