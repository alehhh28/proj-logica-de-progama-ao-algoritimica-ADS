#include <stdio.h>
#include <locale.h>

//Situação problema:
/*Escreva um programa em C que leia os valores de x1, x2 e x3, e imprima o
valor de x sabendo que:
x = x1 + x2 / (x3 + x1) + 2 * (x1 - x2)*/

int main()
{
	setlocale(LC_ALL, "Portuguese") ;
	
	float x1, x2, x3, x; //declaração das variáveis 
	x1 = 0;
	x2 = 0;
	x3 = 0;
	x = 0;
	
	printf("*CALCULA O VALOR DE X NA EXPRESSÃO:\n");
	printf("x = x1 + x2 / (x3 + x1) + 2 * (x1 - x2)*\n");
	printf("\n");

	printf("Defina um valor para x1: ");
	scanf("%f",&x1); //guarda x1
	printf("Defina um valor para x2: ");
	scanf("%f",&x2); //guarda x2
	printf("Defina um valor para x3: ");
	scanf("%f",&x3); //guarda x3
	
	x = x1 + x2 / (x3 + x1) + 2 * (x1 - x2); //calcula o valor de x
	printf("----------------------------------------------------\n");
	printf("x = %.2f + %.2f / (%.2f + %.2f) + 2 * (%.2f - %.2f)\n", x1, x2, x3, x1, x1, x2);
	printf("----------------------------------------------------\n");
	printf("O resultado da expressão é %.2f.\n", x); //imprime o resultado
	
	return 0;
}