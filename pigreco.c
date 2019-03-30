/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "pigreco.c": Algoritmo che calcola il valore di π mediante la formula: π=4-4/3+4/5-4/7+4/9-4/11+4/n+...

			  Il numero di termini da utilizzare nella serie è inserito dall'utente.
*/

#include <stdio.h>
int main()
{
	int num_termini,i,segno=+1;
	double pi;
	printf("APPROSSIMAZIONE DEL PI GRECO\n\n");
	do 
	{
		printf("Dichiarare il numero di termini da utilizzare nella serie:\t");
		scanf("%d",&num_termini);
		putchar('\n');
		if ( num_termini<1 )
		{
			printf("ERRORE! Il valore inserito non può essere inferiorea d \"1\"");
			putchar('\n');
		}
		/*No 'else' for this 'if'*/
	} while ( num_termini<1 );
	for ( i=0; i<num_termini; i++ )
	{
		pi+=segno*4.0/(2.0*i+1);
		segno=-segno;
	}
	printf("\n\npi=\t%f\n",pi);
	return 0;
}
