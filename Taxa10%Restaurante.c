#include <stdio.h>
#include <locale.h>

//Situação problema:
/*Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra
10% para o garçom. Escreva um programa em C que leia o valor gasto com
despesas realizadas em um restaurante e imprima o valor total com a gorjeta*/

float main()
{
    setlocale(LC_ALL, "Portuguese");
    float valorInicial, maisTaxa; //declaração das variáveis
    valorInicial = 0; //variável para o valor inicial da conta
    
    printf("*CALCULA A TAXA DE 10 PORCENTO*\n");
    printf("\n");
    printf("Digite o valor inicial em reais: ");
    scanf("%f",&valorInicial); //guarda o número digitado na variável valorInicial
    
    maisTaxa = valorInicial * 10 / 100 + valorInicial; //calcula os 10% e soma ao valor inicial 
    printf("------------------------------\n");
    printf("Valor total com gorjeta: %.2f reais.\n", maisTaxa); //imprime o valor inicial mais 10%
    
    return 0;
}
    