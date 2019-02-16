/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "treintre.c": Algoritmo che dopo aver chiesto all'utente di inserire un numero intero, conta di 3 in 3 per cinque volte.
*/

#include <stdio.h>

int main()
{
	int start = 0;
	int cont = 0;
	printf("Numero di partenza: ");
	scanf("%d",&start);
	printf("\n\n");
	cont = 0;
	while (cont < 5) {
		printf("\n%d\n",start + cont * 3);
		cont++;
	}
return 0;
}