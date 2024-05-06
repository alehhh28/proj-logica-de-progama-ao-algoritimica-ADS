#include <stdio.h>
#include <locale.h>

//Situação problema:
/*Escreva um programa em C que leia dois números inteiros e imprima o
dividendo, o divisor, o quociente e o resto.*/


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int dividendo, divisor, quociente, resto; //declaração das variáveis
    dividendo = 0; //variável para o dividendo
    divisor = 0; //varável para o divisor
    
    printf("*DIVISÃO DE DOIS NUMEROS*\n"); //mensagem inicial
    printf("\n");
    printf("Digite o primeiro número: ");
    scanf("%d",&dividendo); //insere o dividendo e guarda na váriavel "dividendo"
    
    printf("Digite o segundo número: ");
    scanf("%d",&divisor); //insere o divisor e guarda na na variável "divisor" 
    
    quociente = dividendo / divisor; //variável que calcula a divisão
    resto = dividendo % divisor; //variável que calcula o resto da divisão
    
    printf("------------------------\n");
    printf("%d / %d = %d\n", dividendo, divisor, quociente); //mostra a operação
	printf("------------------------\n");
    printf("Dividendo: %d\n", dividendo); //imprime o dividendo da operação de divisão
	printf("Divisor: %d\n", divisor); //imprime o divisor da operação de divisão
	printf("Quociente: %d.\n", quociente); //imprime o quonciente da operação de divisão
    printf("Resto: %d.\n", resto); //imprime o resto da operação de divisão
    
    return 0;
}