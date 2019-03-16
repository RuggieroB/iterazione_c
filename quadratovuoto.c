/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "quadratovuoto.c": Algoritmo che ricevuto in input il lato di un quadrato, compreso tra 1 e 20, poi ne disegna il perimetro con asterischi (*).
*/

#include <stdio.h>
int main()
{
	int lato,base=0,altezza=0,c='*';
	do {
		printf("\nDISEGNA IL PERIMETRO DI UN QUADRATO CON ASTERISCHI (*) RICEVUTO IN INPUT IL LATO\n\n");
		printf("Inserire il lato del quadrato (min 1, max 20):\t");
		scanf("%d", &lato);
		if ( lato < 1 || lato > 20 )
		{
			printf("\nERRORE! VALORE AL DI FUORI DELL'INTERVALLO PREVISTO!");
		}
	} while ( lato < 1 || lato > 20 );
	printf("\n");

	altezza = 0;
	while (altezza < lato) {
		putchar(c);
		altezza++;
	}
	printf("\n");
	
	base=1;
	while (base < lato-1) {
		putchar(c);
		altezza = 1;
		while (altezza < lato-1) {
			printf(" ");
			altezza++;
			}
		putchar(c);
    		printf("\n");
		base++;
	}

	if (lato > 1) {
		altezza = 0;
		while (altezza < lato) {
			putchar(c);
			altezza++;
    		}
		printf("\n");
	}
	return 0;
}