#include <stdio.h>
void somaArr(int arry[]){
    int resultado = 0;
    int length = sizeof(arry) / sizeof(arry[0]);
    for (int i = 0; i < length; i++)
    {
        resultado += arry[i];
    }
    printf("Resultado da soma do array: %d", resultado);
    
}
int main(){
    printf("Digite 5 números inteiros\n");
    int numeros[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros[i]);
    }
    somaArr(numeros);
    int maior = numeros[0];
    int menor = numeros[0];
    //for para descobrir o maior numero
    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        
    }
    printf("Maior número: %d\n", maior);
    //for para descobrir o menor numero
    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
        
    }
    printf("Menor número: %d\n", menor);

}