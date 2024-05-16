#include <stdio.h>
int main(){
	int i, j;
	printf("TABUADA\n\n");
	for(i = 1; i <= 10; i++){
		printf("\nTabuada do %d\n", i);
		for (j = 0; j <= 10; j++){
			printf("%d x %d = %d\n", j, i, i * j);
		}
	}
	
	return 0;
}