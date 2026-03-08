#include <stdio.h>

int main(){
  for (int i = 1; i < 11; i++)
  {
    printf("Número: %d\n", i);
  }
  int contador = 10;
  while (contador > 0)
  {
    printf("Número decrescente:  %d\n", contador);
    contador--;
  }
  int contador2;
  do
  {
    printf("Digite um número: \n");
    scanf("%d", &contador2);
  } while (contador2 != 0);{
    printf("Dígite um número que seja igual a zero");
  }
  
  
}