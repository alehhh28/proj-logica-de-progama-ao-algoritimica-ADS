#include <stdio.h>
#include <locale.h>

//Situação priblema:
/*Escreva um programa em C que leia um horário (hora e minuto) e imprima
quantos segundos se passaram desde o início do dia*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int segundosHora, segundosMinuto, horaDigitada, minutoDigitado, calculaSegundos; //declaração das variáveis
    segundosHora = 3600;
    segundosMinuto = 60;
    horaDigitada = 0;
    minutoDigitado = 0;
    
    printf("*CALCULA OS SEGUNDOS DESDE O INICIO DO DIA*\n\n");
    printf("Insira a hora: ");
    scanf("%d",&horaDigitada); //guarda a hora
    {
        if (horaDigitada > 23) //verifica se é uma hora válida
        {
            printf("-----------------------------\n'%d' não é uma hora válida!\n", horaDigitada);
        }
        else
        {
            printf("Insira o minuto: ");
            scanf("%d",&minutoDigitado); //guarda o minuto
            {
                if (minutoDigitado > 59) //verifica se é um minuto válido
                {
                    printf("-----------------------------\n'%d' não é um minuto válido!\n", minutoDigitado);
                }
                else
                {
                    calculaSegundos = (horaDigitada * segundosHora) + (minutoDigitado * segundosMinuto); //calcula os segundos da hora e minuto guardado
                    printf("--------------------------------------\n");
					printf("Se passaram %d segundos desde o inicio do dia.\n", calculaSegundos);
                }
            }
        }
        
    }    
    
                
    
    
    
    
    
    return 0;
}
