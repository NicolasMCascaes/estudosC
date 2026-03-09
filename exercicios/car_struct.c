#include <stdio.h>
#include<string.h>

struct Carro
{
    char marca[50];
    int ano;
    float preco;
};

int main(){
    struct Carro carro1;
    struct Carro carro2;

    struct Carro *ptr1 = &carro1;
    struct Carro *ptr2 = &carro2;

    strcpy(ptr1 -> marca, "Kadett");
    ptr1 -> ano = 2001;
    ptr1 -> preco = 30000;

    strcpy(ptr2 -> marca, "Corsa");
    ptr2 -> ano = 2007;
    ptr2 -> preco = 15000;

    printf("Ano do carro 1: %d \n", carro1.ano);
    printf("Ano do carro 2: %d \n", carro2.ano);
     printf("Modelo do carro 1: %s \n", carro1.marca);
    printf("Modelo carro 2: %s \n", carro2.marca);





}