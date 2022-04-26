#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ( void )
{
 
    float a1,r,an,Sn;
    int n;
 
            printf("\tProgressao Aritmetica\n");

            printf("\nEntre com o valor do primeiro termo: ");
            scanf("%f",&a1);

            printf("\nEntre com o valor da razao: ");
            do{ scanf("%f",&r);
            }while(r==0);

            printf("\nNumero de termos: ");
            do{ scanf("%i",&n);
            }while(n<=0);  

            an = (a1 + (n - 1) * r);
            Sn = (n*(a1 + an))/2;

            printf("\n\nN-esimo termo da P.A. - an: %.2f\n\n",an);
            printf("A Soma do termos da P.A. - Sn: %.2f\n\n",Sn);  
            
    return 0;

}
