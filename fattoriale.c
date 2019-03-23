/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "fattoriale.c": Algoritmo che calcola i fattoriali degli interi da 1 a 5.
*/

#include <stdio.h>
int main()
{
	int i,n=1;
	for ( i=1; i<=5; i++ ) {
		printf("%d!\t",i);
	}
	putchar('\n');
	for ( i=1; i<=5; i++ ) {
		n*=i;
		printf("%d\t",n);
	}
	putchar('\n');
	return 0;
}