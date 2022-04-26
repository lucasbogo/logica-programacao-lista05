#include <stdio.h>
#include <stdlib.h>


int main(int arcg, char const *argv[]) 
{
	int numero;
	int soma_par=0;
	int soma_impar=0;
    
	do{
		printf("Digite um numero inteiro [digite um numero negativo para sair e efetuar as somas]: ");
		scanf("%i" , &numero);
		if (numero<0){
			break;
		}
		if (numero%2==0){
		    soma_par += numero;
		}else{
			soma_impar += numero;
		}
    }while(1);
    printf("A soma dos numeros pares eh: %i\n", soma_par);
    printf("A soma dos numeros impares eh: %i\n", soma_impar);
    
    return 0;
    
}	