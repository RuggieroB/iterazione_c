/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "cifra.c": Algoritmo che ricevuto in input un intero conti quanti 7 sono presenti tra le cifre che lo compongono.
*/

#include <stdio.h>
int main()
{
	int n,n_orig,c,count=0;
	do {
		printf("Inserire un numero:\t");
		scanf("%d",&n);
	} while (n < 0);
	n_orig = n;
	while (n > 0) {
		c = n % 10;
		if (c == 7) {
			count++;
		}
		n /= 10;
	}
	printf("\nNel numero\t%d\tsono presenti\t%d\toccorrenze della cifra \"7\"\n",n_orig,count);
	return 0;
}