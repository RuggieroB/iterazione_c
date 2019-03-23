/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "sommaprodotto.c": Algoritmo che calcola la somma degli interi pari compresi tra 2 e 30 e il prodotto degli interi dispari compresi tra 1 e 15.
*/

#include <stdio.h>
int main()
{
	int i,sum=0,product=1;
	for ( i=2; i<=30; i+=2 ) {
		sum+=i;
	}
	for ( i=1; i<=15; i+=2 ) {
		product*=i;	
	}
	printf("Somma degli interi pari compresi tra 2 e 30:\t%d\n",sum);
	printf("\nProdotto degli interi dispari compresi tra 1 e 15:\t%d\n",product);
	return 0;
}