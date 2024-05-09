#include <stdio.h>
#include <locale.h>

//Situação problema:
/*Escreva um programa em C que leia um número inteiro qualquer e determine
se o número lido é divisível por 3 ou não. Use o operador ternário*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int numeroDigitado, tres, divisao, restoDivisao; //declaração das variáveis
    numeroDigitado = 0;
	tres = 3;
	printf("*VERIFICA SE É DIVISIVEL POR 3*\n\n");
    printf("Digite um numero: ");
    scanf("%d", &numeroDigitado);
    
    divisao = numeroDigitado / 3; //calcula a divisão
 	restoDivisao = numeroDigitado % tres; //calcula o resto da divisão
	printf("--------------------------------\n%d / 3 = %d\n", numeroDigitado, divisao); //imprime o resultado
	
	restoDivisao == 0 ? printf("-----------------------------\n%d é divisivel por 3.\n", numeroDigitado) : printf("-----------------------------\n%d não é divisivel por 3.\n", numeroDigitado);
	printf("Resto = %d\n" , restoDivisao); //usando ternario, verifica se o resto é igual a 0
	
    return 0;
}