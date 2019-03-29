/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "sumvett.c": Algoritmo che dopo aver chiesto all'utente dieci numeri interi, li memorizza all'interno di un vettore, li somma, ne calcola la media e infine stampa 
   tutti i dati e i risultati.
*/

#include <stdio.h>
int main()
{
	int numeri[10];
	int i,somma;
	double media;
	printf("Inserire 10 numeri interi:\n");
	for ( i=0; i<10; i++ )
	{
		printf("Inserire valore:\t");
		scanf("%d",&numeri[i]);
		putchar('\n');
		somma+=numeri[i];
	}
	putchar('\n');
	printf("Numeri inseriti:\n");
	for ( i=0; i<10; i++ )
	{
		printf("numeri[%d]= \t%d",i,numeri[i]);
		putchar('\n');
	}
	putchar('\n');
	printf("\nSomma valori=\t%d",somma);
	media=(double)somma/10.0;
	putchar('\n');
	printf("Media valori=\t%f",media);
	putchar('\n');
	return 0;
}