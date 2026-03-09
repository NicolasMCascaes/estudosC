#include <stdio.h>

int main(){
    int inteiros[8] = {10, 20, 30, 300, 50, 60, 70, 200};
    int maior = 0;
    for (int i = 0; i < 8; i++)
    {
        if (maior < *(inteiros + i))
        {
           maior = *(inteiros + i);
        }
        
    }
    printf("maior numero: %d", maior);
}