#include <stdio.h>
#include<string.h>

struct Carro
{
    char marca[50];
    int ano;
    float preco;
};

int main(){
    struct Carro carro1 = {"Chevrolet", 1977, 10000.50};
    struct Carro *ptr = &carro1;
    strcpy( ptr -> marca, "Toyota");
    ptr -> preco = 85000;
    ptr -> ano = 2020;

    printf("%d \n", carro1.ano);
    printf("%s \n", carro1.marca);
    printf("%f \n", carro1.preco);
}
