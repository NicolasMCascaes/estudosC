#include <stdio.h>
void dobrar(int *valor);

int main(){
    int x = 10;
    dobrar(&x);
    printf("%d\n", x);
}
void dobrar(int *valor){
    *valor = *valor * 2;
}