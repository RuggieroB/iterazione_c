/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "massimo.c": Algoritmo che ricevuti in input 10 numeri ne determina il maggiore.
*/

#include <stdio.h>
int main()
{
	int c=1,val,max;
	printf("CALCOLO DEL VALORE MAGGIORE TRA 10 VALORI INSERITI DALL'UTENTE.");
	printf("\n\nInserire un valore:\t");
	scanf("%d",&val);
	max = val;
	while ( c < 10 )
	{
		printf("\nInserire un valore:\t");
		scanf("%d",&val);
		if ( val >= max )
		{
			max = val;
		}
		c++;
	}
	printf("\n\nValore maggiore:\t%d\n",max);
return 0;
}