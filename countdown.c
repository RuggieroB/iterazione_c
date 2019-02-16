/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "countdown.c": Algoritmo che dopo aver chiesto all'utente di inserire un numero intero, esegue il conto alla rovescia.
*/

#include <stdio.h>
int main()
{
	int c=0;
	printf("Da che numero deve partire? ");
	scanf("%d",&c);
	printf("\n\n");
	while (c >= 0) 
	{
	printf("\n%d\n",c);
	c--;
	}
	printf("Lanciato!\n");
return 0;
}