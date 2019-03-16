/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "cerchio.c": Algoritmo che calcola circonferenza e superficie di un cerchio ricevuto in input il raggio (double).
*/

#include <stdio.h>
int main()
{
	const double pi=3.14159265359;
	double r,c,s;
	do {
		printf("Inserire il raggio del cerchio:\t"),
		scanf("%lf",&r);
	} while ( r <= 0 );
	c = 2.0 * pi * r;
	s = pi * r * r;
	printf("\nCirconferenza del cerchio:\t%f",c);
	printf("\nSuperficie del cerchio:\t%f\n",s);
	return 0;
}