#include <stdio.h> 
#include <locale.h>

//Situação problema:
/*Escreva um programa em C que leia a base e a altura de um retângulo,
imprimindo seu perímetro e sua área.*/


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, area, perimetro; //declação das variáveis
    base = 0; //variável base
    altura = 0; //variável altura
    
    printf("Digite um valor para base: "); 
    scanf("%f",&base); //insere base e armazena na variável "base"
    
    printf("Digite um valor para a altura: ");
    scanf("%f",&altura); //insere altura e armazena na variável "altura"
    
    area = base * altura; //variável que calcula a área 
    perimetro = (base + altura) * 2; //variável que calcula o perímetro
    
    printf("A área é %.2f.\n", area); //resultado da área com duas casa decimais
    printf("O perímetro é %.2f.\n", perimetro);//resultado do perímetro com duas casas decimais 
    
    return 0;
}
    