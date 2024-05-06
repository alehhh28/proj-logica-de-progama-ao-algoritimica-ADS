#include <stdio.h> 
#include <locale.h>

//Situa��o problema:
/*Escreva um programa em C que leia a base e a altura de um ret�ngulo,
imprimindo seu per�metro e sua �rea.*/


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float base, altura, area, perimetro; //decla��o das vari�veis
    base = 0; //vari�vel base
    altura = 0; //vari�vel altura
    
    printf("Digite um valor para base: "); 
    scanf("%f",&base); //insere base e armazena na vari�vel "base"
    
    printf("Digite um valor para a altura: ");
    scanf("%f",&altura); //insere altura e armazena na vari�vel "altura"
    
    area = base * altura; //vari�vel que calcula a �rea 
    perimetro = (base + altura) * 2; //vari�vel que calcula o per�metro
    
    printf("A �rea � %.2f.\n", area); //resultado da �rea com duas casa decimais
    printf("O per�metro � %.2f.\n", perimetro);//resultado do per�metro com duas casas decimais 
    
    return 0;
}
    