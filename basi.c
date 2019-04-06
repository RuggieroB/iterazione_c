/*

# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Algoritmo "basi.c": Algoritmo che stampa una tabella con i numeri da 0 a 255 in decimale, in binario, in ottale e in esadecimale.

*/

#include <stdio.h>

int main () {

	int c1,a,ca,cb,c2;

	printf("%5s%10s%5s%4s\n","N","BIN","OCT","HEX");

	for ( c1=0; c1<=255; c1++ ) {

		printf("%5d\t",c1);

		/*CONVERSIONE IN BINARIO*/

		cb=128;
		a=c1;

		for ( c2=0; c2<8; c2++ ) {

			ca=a/cb;
			printf("%d",ca);
			a-=ca*cb;
			cb/=2;

		}

		printf("  ");

		/*CONVERSIONE IN OTTALE*/

		cb=64;
		a=c1;

		for ( c2=0; c2<3; c2++ ) {

			ca=a/cb;
			printf("%d",ca);
			a-=ca*cb;
			cb/=8;

		}

		printf("  ");

		/*CONVERSIONE IN ESADECIMALE*/

		cb=16;
		a=c1;

		for ( c2=0; c2<2; c2++ ) {

			ca=a/cb;

			switch(ca) {

				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					printf("%d",ca);
					break;
				case 10:
					putchar('A');
					break;
				case 11:
					putchar('B');
					break;
				case 12:
					putchar('C');
					break;
				case 13:
					putchar('D');
					break;
				case 14:
					putchar('E');
					break;
				case 15:
					putchar('F');
					break;
				default:
					putchar('-');
					break;

			}

			a-=ca*cb;
			cb/= 16;

		}

	putchar('\n');

	}

	putchar('\n');

	return 0;

}
