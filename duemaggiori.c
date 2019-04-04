/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "duemaggiori.c": Algoritmo che ricevuti in input 10 numeri ne determina i due maggiori.
*/

#include <stdio.h>
int main()
{
	int c=1,val,max1,max2;
	printf("CALCOLO DEI DUE VALORI MAGGIORI TRA 10 VALORI INSERITI DALL'UTENTE.");
	printf("\n\nInserire un valore:\t");
	scanf("%d",&val);
	max1 = val;
	printf("\n\nInserire un valore:\t");
	scanf("%d",&val);
	c++;
	if ( val > max1 )
	{
		max2 = max1;
		max1 = val;
	}
	else
	{
		max2 = val;
	}
	while ( c < 10 )
	{
		printf("\nInserire un valore:\t");
		scanf("%d",&val);
		if ( val > max1 )
		{
			max2 = max1;
			max1 = val;
		}
		else if ( val > max2 )
		{
			max2 = val;
		}
		/*No 'else' for this 'if'*/
		c++;
	}
	printf("\n\nValore maggiore:\t%d",max1);
	printf("\nSecondo valore maggiore:\t%d\n",max2);
return 0;
}