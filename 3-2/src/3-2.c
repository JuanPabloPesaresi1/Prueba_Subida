/*
 ============================================================================
 Name        : 3-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int funcionMostrar (float numero);


int main(void)
{
	setbuf(stdout, NULL);
	float numero;

	 printf("Ingrese un numero: ");
	 scanf("%F", &numero);

	 funcionMostrar (numero);

	return EXIT_SUCCESS;
}
int funcionMostrar (float numero)
{

    printf("El numero ingresado fue: %f", numero);




}
