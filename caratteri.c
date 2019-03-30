/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "caratteri.c": Algoritmo che data una stringa (non in input), ne stampa i caratteri uno per riga.
*/

#include <stdio.h>
int main()
{
	int i=0;
	char Traviata[]="Pura siccome un angelo / iddio mi diè una figlia; / se Alfredo nega riedere / in seno alla famiglia, / l'amato e amante giovane, / cui sposa andar dovea," \
	" / or si ricusa al vincolo / che lieti ne rendea... / deh, non mutate in triboli / le rose dell'amor. / Ai preghi miei resistere / non voglia il vostro cor. / No! No!...";
	printf("Stringa \"Traviata\" (arioso di Germont)=\t");
	puts(Traviata);
	while ( Traviata[i] !=0 )
	{
		printf("\t%c\t",Traviata[i]);
		putchar('\n');	
		i++;
	}
	return 0;
}