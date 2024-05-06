#include <stdio.h>
#include <locale.h>

//Situa��o problema:
/*Escreva um programa em C que leia dois n�meros inteiros e imprima o
dividendo, o divisor, o quociente e o resto.*/


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int dividendo, divisor, quociente, resto; //declara��o das vari�veis
    dividendo = 0; //vari�vel para o dividendo
    divisor = 0; //var�vel para o divisor
    
    printf("*DIVIS�O DE DOIS NUMEROS*\n"); //mensagem inicial
    printf("\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%d",&dividendo); //insere o dividendo e guarda na v�riavel "dividendo"
    
    printf("Digite o segundo n�mero: ");
    scanf("%d",&divisor); //insere o divisor e guarda na na vari�vel "divisor" 
    
    quociente = dividendo / divisor; //vari�vel que calcula a divis�o
    resto = dividendo % divisor; //vari�vel que calcula o resto da divis�o
    
    printf("------------------------\n");
    printf("%d / %d = %d\n", dividendo, divisor, quociente); //mostra a opera��o
	printf("------------------------\n");
    printf("Dividendo: %d\n", dividendo); //imprime o dividendo da opera��o de divis�o
	printf("Divisor: %d\n", divisor); //imprime o divisor da opera��o de divis�o
	printf("Quociente: %d.\n", quociente); //imprime o quonciente da opera��o de divis�o
    printf("Resto: %d.\n", resto); //imprime o resto da opera��o de divis�o
    
    return 0;
}