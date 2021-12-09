// Lucas de carvalho Lopes 
// Data:08/12/2021
// Professor: Eduardo 
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define l 10
#define p 15

int main(void){
	setlocale(LC_ALL,"portuguese");
	int logic[l];
	int program[p];
	int i, j;
	
	printf("\nDigite o número de matricula: ");
	for(i=0; i<l; i++){
		scanf("%i",&logic[i]);
	}
	printf("\nDigite o número de matricula: ");
	for(j=0; j<p; j++){
		scanf("%i",&program[j]);
	}

	for(i = 0; i<l; i++){
		if(i < l){
			printf("\n [%d]\t",logic[i]);
			printf("\t\t [%d]",program[i]);
		}
		if(logic[i]==program[i]){
			printf("\t\t   [%i]\t",logic[i]);
		}
	}
}
