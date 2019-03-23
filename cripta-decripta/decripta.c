/*
# iterazione_c

# Algoritmi di Laboratorio di Programmazione. Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Cartella "cripta-decripta":
	- Algoritmo "cripta.c": Algoritmo che accetta un intero di quattro cifre. Sostituisce ogni cifra con il risultato della somma modulo dieci tra la cifra stessa e sette. 
				 Infine scambia la prima cifra con la terza e la seconda con la quarta.

	- Algoritmo "decripta.c": Algoritmo che accetta un intero di quattro cifre crittografato con il metodo dell'algoritmo "cripta.c" (Accetta un intero di quattro cifre. 
				   Sostituisce ogni cifra con il risultato della somma modulo dieci tra la cifra stessa e sette. Infine scambia la prima cifra con la terza e 
				    la seconda con la quarta.) e restituisce il numero originale.
*/

#include <stdio.h>
int main()
{
	int num,c1,c2,c3,c4,temp;
	do {
		printf("Inserire un intero di 4 cifre:\t");
		scanf("%d",&num);
		putchar('\n');
	} while ( num <= 100 || num > 9999 );
	printf("\n Numero da decrittografare:\t%d",num);                                                                     
	putchar('\n');
	c1=num%10;
	c1=(c1+3)%10;
	num/=10;
	c2=num%10;
	c2=(c2+3)%10;
	num/=10;
	c3=num%10;
	c3=(c3+3)%10;
	num/=10;
	c4=num%10;
	c4=(c4+3)%10;
	temp=c1;
	c1=c3;
	c3=temp;
	temp=c2;
	c2=c4;
	c4=temp;
	num = c4*1000+c3*100+c2*10+c1;
	printf("\n\nNumero decrittografato:\t%d\n",num);
	return 0;
}