/*
 ============================================================================
 Name        : ProgLabo1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int acumulador = 0;
	float promedio;
	int respuestaScan;
	int i;

	for(i=0; i<5; i++){
		printf("\n Ingrese un numero: ");
		fflush(stdin);
		respuestaScan = scanf("%d", &numero);

		while(respuestaScan == 0){
			printf("Error, reingrese un numero: ");
			fflush(stdin);
			respuestaScan = scanf("%d", &numero);
		}
		acumulador = acumulador + numero;
	}
	promedio = (float)acumulador / i;
	printf("\n El promedio es: %.2f", promedio);
	return EXIT_SUCCESS;

}
