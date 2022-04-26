
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ( void )
{

    float a1,an,Sn,q;
    int n;

        printf("\tProgressso Geometrica\n");
        printf("\nEntre com o valor do primeiro termo: ");
        scanf("%f",&a1);

        printf("\nEntre com o valor da razao: ");
        do{ scanf("%f",&q);
        }while(q==0);

        printf("\nNumero de termos: ");
        do{ scanf("%i",&n);
        }while(n<=0);   
 
        an = (a1 * pow(q,n-1));
        Sn = ((a1*(pow(q,n) - 1))/(q-1));

        printf("\nN-esimo termo da P.G. - an: %.2f\n\n",an);
        printf("A Soma do termos da P.G. finita - Sn: %.2f\n\n",Sn);
            
    return 0;
}	