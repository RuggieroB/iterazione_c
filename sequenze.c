/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.

- Algoritmo "sequenze.c": Algoritmo che genera le sequenze:
			   A: 1, 2, 3, 4, 5, 6, 7, 8;
			   B: 3, 8, 13, 18, 23;
			   C: 20, 14, 8, 2, -4, -10;
			   D: 19, 27, 35, 43, 51.
*/

#include <stdio.h>
int main()
{
	int i;
	printf("Sequenza A:\t");
	for ( i=0; i<=8; i++ ) {
		printf("%d, ",i);
	}
	putchar('\n');
	putchar('\n');
	printf("Sequenza B:\t");
	for ( i=3; i<=23; i+=5 ) {
		printf("%d, ",i);
	}
	putchar('\n');
	putchar('\n');
	printf("Sequenza C:\t");
	for ( i=20; i>=-10; i-=6 ) {
			printf("%d, ",i);
	}
	putchar('\n');
	putchar('\n');
	printf("Sequenza D:\t");
	for ( i=19; i<=51; i+=8 ) {
		printf("%d, ",i);
	}
	putchar('\n');
	return 0;
}