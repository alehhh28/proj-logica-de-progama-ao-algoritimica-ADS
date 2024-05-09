#include <stdio.h>
#include <locale.h>

//Situação problema:
/*Escreva um programa em C que leia uma temperatura em graus centígrados,
e imprima a temperatura em graus Fahrenheit. A fórmula de conversão é:*/

float main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float celsius, fahrenheit; //declaração das variáveis
    celsius = 0; //variável para os graus celsius
    
    printf("*CONVERTE GRAUS CELSIUS EM FAHRENHEIT*\n");
    printf("\n");
    printf("Digite os graus Celsius: ");
    scanf("%f",&celsius); //guarda o valor digitado na variável "celsius"
    
    fahrenheit = (9 * celsius + 160)/5; //variável fórmula para converter celsius em fahrenheit
    
    printf("----------------------------\n");
    printf("%.1f⁰ celsius = %.1f⁰ fahrenheit.\n", celsius, fahrenheit); //imprime o valor em fahrenheit
    
    return 0;
}
    