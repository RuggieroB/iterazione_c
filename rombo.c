/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "rombo.c": Algoritmo che, ricevuto in input un intero dispari compreso tra 1 e 19, disegni un rombo utilizzando asterisci (*) e la sola funzione "putchar()".
*/

#include <stdio.h>
int main()
{
	int righe,vert,aster,spazio;
	printf("ROMBO\n\n");
	do
	{
		printf("\nDichiarare il numero di righe (VALORE DISPARI COMPRESO TRA \"1\" E \"19\"):\t");
		scanf("%d",&righe);
	if ( righe<1 )
	{
		printf("\nERRORE! Valore minore di \"1\"!");
	}
	else if ( righe>19 )
	{
		printf("\nERRORE! Valore maggiore di \"19\"!");
	}
	/*No 'else' for this 'if'*/
	if ( righe%2==0 )
	{
		printf("\nERRORE! Valore Pari!");
	}
	/*No 'else' for this 'if'*/
	} while ( righe<1 || righe%2==0 || righe>19 );
	putchar('\n');
	for ( vert=0; vert<righe/2; vert++ ) {
		for ( spazio=1; spazio<=righe/2-vert; spazio++ )
		{
			putchar(' ');
		}
		for ( aster=1; aster<=2*vert+1; aster++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	for ( aster=1; aster<=righe; aster++ )
	{
		putchar('*');
	}
	putchar('\n');
	for ( vert=0; vert<righe/2; vert++ )
	{
		for ( spazio=1; spazio<=vert+1; spazio++ )
		{
			putchar(' ');
		}
		for ( aster=1; aster<righe-(2*vert+1); aster++ )
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}