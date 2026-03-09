#include <stdio.h>

int main(){
    int num[6] = {1, 2, 3, 4, 5 , 6};
    int *ptr = num;
    for (int i = 0; i < 3; i++)
    {
       int temp = *(ptr + i);
       *(ptr + i) = *(ptr + (5-i));
       *(ptr + (5-i)) = temp;

    }
    for (int i = 0; i < 6; i++)
    {
        printf("Posição nova: %d\n", num[i]);
    }
    return 0;
}