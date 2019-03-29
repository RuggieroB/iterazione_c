/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "address.c": Algoritmo che stampa il valore dell'indirizzo di tutti gli elementi di un vettore di dieci interi.
*/

#include <stdio.h>
int main()
{
	int numeri[10];
	int i;
	putchar('\n');
	for ( i=0; i<10; i++ )
	{
		printf("Indirizzo di numeri[%d]:\t%p",i,(void*)&numeri[i]);
		putchar('\n');
		putchar('\n');
	}
	return 0;
}