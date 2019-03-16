/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "palindromi.c": Algoritmo che ricevuto in input un numero intero di 5 caratteri, determina se sia palindromo.
*/

#include <stdio.h>
int main()
{
	int n,c1,c2,c4,c5;

	do {
		printf("Inserire un numero di 5 cifre:\t");
		scanf("%d",&n);
	} while ( n < 10000 || n > 99999 );
	
	c5 = n % 10;
	n /= 10;
	c4 = n % 10;
	n /= 10;
	n /= 10;
	c2 = n % 10;
	n /= 10;
	c1 = n;

	if (c1 == c5 && c2 == c4) {
		printf("Il numero inserito E' palindromo.\n");
	} else {
		printf("Il numero inserito NON E' palindromo.\n");
	}	

	return 0;
}