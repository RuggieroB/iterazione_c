/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "binario.c": Algoritmo che converte un numero binario, ricevuto in input, in decimale.
*/

#include <stdio.h>
int main()
{
	int bin,bin_backup,c,w=1,dec=0,is_binary;
	do {
		is_binary=1;
		printf("Inserire un numero binario:\t");
		scanf("%d",&bin);
		bin_backup=bin;
		while (bin != 0 && is_binary) {
			c=bin%10;
			bin/=10;
			if (c != 0 && c != 1) {
				is_binary=0;
			}
		}
	} while (!is_binary);
	bin=bin_backup;
	while (bin > 0) {
		c=bin%10;
		bin/=10;
		dec+=c*w;
		w*=2;
	}
	printf("\nIl numero \t%d\t(in base \"2\") e' uguale a \t%d\t(in base \"10\").\n",bin_backup,dec);
	return 0;
}