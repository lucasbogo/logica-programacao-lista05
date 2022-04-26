#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

    float num;
    int i;

        for (i=1; i<=10; i++) {
            printf("Informe um numero:");
            scanf("%f", &num);

        while (num <= 0) {
            printf("\n ATENCAO! Informe um numero maior que zero:");
            scanf("%f", &num);
        }
            printf("Quadrado: %.2f \n", num * num);
            printf("Cubo: %.2f \n", num * num * num);
    }
    
    return 0;
}