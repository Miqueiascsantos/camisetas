#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int p=0;
	int m=0;
	int g=0;
	int r= 0;
	int r1= 0;
	int r2= 0;
	int r3= 0;
	
	
	printf("Quantas camisas tamanho P: " );
	scanf("%i", &p);
	
	printf("Quantas camisas tamanho M: " );
	scanf("%i", &m);
	
	printf("Quantas camisas tamanho G: " );
	scanf("%i", &g);
	
	r= p * 10;
	r1= m* 12;
	r2= g * 15;
	r3= r + r1 + r2;
	
	printf("Valor total das camisetas tamanho P: %i r$\n",r);
	
	printf("Valor total das camisetas tamanho M: %i r$\n",r1);
	
	printf("Valor total das camisetas tamanho G: %i r$\n",r2);
	
	printf("Valor total a pagar pelas camisetas: %i r$\n",r3);
	
	system("pause");
	
	
	return 0;
}
