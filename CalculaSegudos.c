#include <stdio.h>
#include <locale.h>

//Situa��o priblema:
/*Escreva um programa em C que leia um hor�rio (hora e minuto) e imprima
quantos segundos se passaram desde o in�cio do dia*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int segundosHora, segundosMinuto, horaDigitada, minutoDigitado, calculaSegundos; //declara��o das vari�veis
    segundosHora = 3600;
    segundosMinuto = 60;
    horaDigitada = 0;
    minutoDigitado = 0;
    
    printf("*CALCULA OS SEGUNDOS DESDE O INICIO DO DIA*\n\n");
    printf("Insira a hora: ");
    scanf("%d",&horaDigitada); //guarda a hora
    {
        if (horaDigitada > 23) //verifica se � uma hora v�lida
        {
            printf("-----------------------------\n'%d' n�o � uma hora v�lida!\n", horaDigitada);
        }
        else
        {
            printf("Insira o minuto: ");
            scanf("%d",&minutoDigitado); //guarda o minuto
            {
                if (minutoDigitado > 59) //verifica se � um minuto v�lido
                {
                    printf("-----------------------------\n'%d' n�o � um minuto v�lido!\n", minutoDigitado);
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
