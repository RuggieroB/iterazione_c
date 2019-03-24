/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "figure.c": Algoritmo che stampa 4 figure utilizzando asterisci (*) e la sola funzione "putchar()".
*/

#include <stdio.h>
int main()
{
	int vert,orizz;
	printf("A)");
	putchar('\n');
	for ( vert=1; vert<=10; vert++)
	{
		for ( orizz=1; orizz<=vert; orizz++ )
	{
			putchar('*');
		}
		putchar('\n');
	}
	putchar('\n');
	printf("B)");
	putchar('\n');
	for ( vert=1; vert<=10; vert++ )
	{
		for ( orizz=1; orizz<=11-vert; orizz++ )
	{
			putchar('*');
		}
		putchar('\n');
	}
	putchar('\n');
	printf("C)");
	putchar('\n');
	for ( vert=1; vert<=10; vert++ )
	{
		for ( orizz=1; orizz<vert; orizz++ )
	{
			putchar(' ');
		}
		for ( orizz=vert; orizz<11; orizz++ )
		 {
			putchar('*');
		 }
		putchar('\n');
	}
	putchar('\n');
	printf("D)");
	putchar('\n');
	for ( vert=1; vert<=10; vert++ )
	{
		for ( orizz=1; orizz<=10-vert; orizz++ )
	{
			putchar(' ');
		}
		for ( orizz=11-vert; orizz<=10; orizz++ )
		 {
			putchar('*');
		 }
		putchar('\n');
	}
	return 0;
}