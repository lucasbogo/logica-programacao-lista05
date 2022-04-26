#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

    float num, soma=0, media=0;
    int i;

        for (i=1; i<=15; i++) {

        printf("Informe quinze numeros:");
        scanf("%f", &num); }

        soma += num;

        media = soma / 15;
        printf("A media e: %.2f", media);


    return 0;
 
}