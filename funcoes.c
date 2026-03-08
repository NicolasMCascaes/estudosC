#include<stdio.h>

int soma(int a, int b){
    return a + b;
}
void mostrarResultado(int resultado){
    printf("Resultado da soma: %d", resultado);
}

int main(){
    int numero1;
    int numero2;
    printf("Digite dois números para serem somados: \n");
    scanf("%d %d", &numero1, &numero2);
    int resultado = soma(numero1, numero2);
    mostrarResultado(resultado);
}
