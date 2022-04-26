#include <stdio.h>
#include <stdlib.h>


int main() 
{

    int i, soma = 0;

        for(i =0; i <= 100; i+=2)

            soma += i;

        printf("Soma dos impares de 0 a 100: %d\n\n", soma);

    return 0;
}