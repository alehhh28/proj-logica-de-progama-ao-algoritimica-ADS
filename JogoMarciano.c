#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() { 
    setlocale(LC_ALL, "Portuguese");
    int i = 1, balas = 6, controleLoop = 6, locmarciano = 1, disparo;
	if(locmarciano < 100){ //Se o número da árvore for menor que 100 
		do{
			printf("JOGADOR 1[MARCIANO]\n");  
    		printf("Esconda-se do caçador!\n");
    		printf("Em qual das 100 árvores da floresta\nvocê gostaria de se esconder?\n[Digite o número da árvore:] ");
    		scanf("%d", &locmarciano);
    		system("cls");
    		if(locmarciano > 100 && locmarciano <= 1000){ //Se o número de árvores ficar entre 101 e 1000, gerar erro
				printf("\nParece que não tem %d árvores nesta floresta. :(\n[Digite um número válido!]\n\n", locmarciano);	
			}
			if(locmarciano > 1000){ //Se o número de árvores for maior que 1000, gerar erro
				printf("Calma lá, meu bacano! Pra que isso tudo?\n[Digite um número válido!]\n\n");
			}
		} while (locmarciano > 100); //Pedir um número para "árvore" enquanto o número digitado não atender ao requisito: for menor que 100
	} 
    printf("JOGADOR 2[CAÇADOR]\n");  
    printf("Em que árvore você acha que\no marciano se escondeu?\n");
    printf("Se errar todos os tiros...\nBem, boa viagem até Marte!\n");
    printf("Lembrem-se: você só tem 5 balas.\n\n[Digite o número da árvore]\n");
	do{ //Diminuir o contador de balas enquanto a variável "controleLoop" não for 0, se for, encerrar o loop
		balas--; //Iniciou em 6, nessa linha o valor atualiza para 5
		controleLoop--;
		if( balas > 0){ //Se balas for maior que zero então continuar pedindo  balas
			do{ //Pede um número equanto não acertar o marciano
				printf("%d balas restantes.\nTentativa %d: ", balas, i);
 				scanf("%d", &disparo);
 				i++; 
   				if (disparo > 100){ //Se a tentativa for maior que o número permitido(100), gerar erro
					printf("\nSó tem 100 árvores nessa floresta, esqueceu?\nVou fingir que você não desperdiçou uma bala á toa.\n[Digite um número válido!]\n");
					controleLoop++;
					balas++; //As balas não diminuem na execução do erro
					i--;
			    }					
   				if(disparo > locmarciano && disparo < 101){
					printf("\n- Erooooouu! Estou mais para a esquerda, humano!\n");
				}
				if (disparo < locmarciano && disparo < 101){
					printf("\n- Erooooouu! Estou mais para a direita, humano!\n");
				}
				if (disparo == locmarciano){ //Mensagem de vitória é exibida quando a tentativa é igual a árvore que o marciano se escondeu
					printf("\nVocê matou o marciano! :D\nVocê não vai para Marte!(dessa vez)\n\n");
					balas = 0; //O número de balas é zerado para quebrar o loop**
				}
			} while(disparo =! locmarciano);
		}
	} while(controleLoop != 0); //Esse loop** só é quebrado quando o contador do loop zera
	if(controleLoop == 0 && balas == 0) { //Mensagem de game over só é exibida se "controleLoop" e "balas" for igual a zero
		printf("\nParece que suas balas acabaram...\nO marciano te abduziu para Marte!\nVocê virou camisa de saudade, amigo!\n\n");
	}	
	system("pause");	
    return 0;
}