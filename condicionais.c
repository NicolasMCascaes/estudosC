#include <stdio.h>

int inteiro;
int diaDaSemana;
void main(){
    printf("Digite um número\n");
    scanf("%d", &inteiro);

    if (inteiro > 0)
    {
       printf("O número é positivo\n");
    }else if (inteiro == 0)
    {
       printf("o número é 0\n");
    }else{
        printf("O número é negativo");
    }
    printf("Dígite um número de 1 a 7\n");
    scanf("%d", &diaDaSemana);
    switch (diaDaSemana)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terça");
        break;
    case 4: 
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sábado");
        break;
    default:
        printf("Opção inválida!");
    }
}
