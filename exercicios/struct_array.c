#include <stdio.h>
#include<string.h>

struct Carro
{
    char marca[50];
    int ano;
    float preco;
};


int main(){
   struct Carro carros[3] = {
    {
        "Carro", 1999, 10000
    },
    {
        "Carro2", 2000, 15000
    },
    {
        "Carro3", 2010, 20000
    }
   };
   struct Carro *ptr = carros;
   for (int i = 0; i < 3; i++)
   {
        printf("%d\n", (ptr + i) -> ano);
        printf("%s\n", (ptr + i) -> marca);
        printf("%.2f\n", (ptr + i) -> preco);
   }

   float mais_caro = 0;
   struct Carro carro_mais_caro;
   for (int i = 0; i < 3; i++)
   {
    if ((ptr + i) -> preco > mais_caro)
    {
       carro_mais_caro.ano = (ptr + i) -> ano;
       carro_mais_caro.preco = (ptr + i) -> preco;
       strcpy(carro_mais_caro.marca, (ptr + i) -> marca);
    }
   }
   printf("Ano carro mais caro: %d\n", carro_mais_caro.ano);
   printf("Marca carro mais caro: %s\n", carro_mais_caro.marca);
   printf("Preco carro mais caro: %.2f\n", carro_mais_caro.preco);
   
   printf("Tamanho do struct na memoria: %d", sizeof(struct Carro));
}