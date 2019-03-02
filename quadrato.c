/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "quadrato.c": Algoritmo che ricevuto in input il lato di un quadrato, compreso tra 1 e 20, poi lo disegna con asterischi (*).
*/

#include <stdio.h>
int main()
{
	int lato,base=0,altezza=0,c='*';
	do {
		printf("DISEGNA UN QUADRATO CON ASTERISCHI (*)\n\n");
		printf("Inserire il lato del quadrato (min 1, max 20):\t");
		scanf("%d", &lato);
		if ( lato < 1 || lato > 20 )
		{
			printf("\nERRORE! VALORE AL DI FUORI DELL'INTERVALLO PREVISTO!");
		}
	} while ( lato < 1 || lato > 20 );
	printf("\n");

	base = 0;
	while ( base < lato ) {
		altezza = 0;
    		while ( altezza < lato ) {
      			putchar(c);
      			altezza++;
    		}
    		printf("\n");
		base++;
	}
	
	return 0;
}