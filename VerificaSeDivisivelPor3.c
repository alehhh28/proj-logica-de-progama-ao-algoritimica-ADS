#include <stdio.h>
#include <locale.h>

//Situa��o problema:
/*Escreva um programa em C que leia um n�mero inteiro qualquer e determine
se o n�mero lido � divis�vel por 3 ou n�o. Use o operador tern�rio*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int numeroDigitado, tres, divisao, restoDivisao; //declara��o das vari�veis
    numeroDigitado = 0;
	tres = 3;
	printf("*VERIFICA SE � DIVISIVEL POR 3*\n\n");
    printf("Digite um numero: ");
    scanf("%d", &numeroDigitado);
    
    divisao = numeroDigitado / 3; //calcula a divis�o
 	restoDivisao = numeroDigitado % tres; //calcula o resto da divis�o
	printf("--------------------------------\n%d / 3 = %d\n", numeroDigitado, divisao); //imprime o resultado
	
	restoDivisao == 0 ? printf("-----------------------------\n%d � divisivel por 3.\n", numeroDigitado) : printf("-----------------------------\n%d n�o � divisivel por 3.\n", numeroDigitado);
	printf("Resto = %d\n" , restoDivisao); //usando ternario, verifica se o resto � igual a 0
	
    return 0;
}