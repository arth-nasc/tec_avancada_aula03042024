#include <stdio.h>

int main(){
	int altura,base,area,i,ib;
	printf("Insira uma altura (deve ser numero natural): ");
	scanf("%i",&altura);
	for (i=0;i<altura;i++) {
		printf("#");
		base=i;
		//printf("%i",base);
		if (base>=1){
			for (ib=0;ib<base;ib++){
				printf("#");
			}
		}
		printf("\n");		
	}
	area=(i+altura);
	printf("%i",area);
	return 0;
}
