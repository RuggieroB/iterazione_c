/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "tabelline.c": Algoritmo che stampa la Tavola Pitagorica (da 0 a 12).
*/

#include <stdio.h>
int main()
{
	int r=0,c=0;
	printf("TAVOLA PITAGORICA (da 0 a 12).\n\n");
	while ( r <= 12 )
	{
		c=1;
		while ( c <= 12 )
		{
			printf("%12d",r * c),
			c++;
		}
	putchar('\n');
	r++;
	}
return 0;
}