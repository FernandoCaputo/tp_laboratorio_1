/*
 ============================================================================
 Name        : funciones.c
 Author      : Fernando Caputo
 Version     :
 Copyright   : GLP
 Description : Trabajo Practico 1
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float getSum (float a, float b){
	float suma;

	suma = a + b;
	return suma;
}
float getSubtraction (float a, float b){
	float resta;

	resta = a - b;
	return resta;
}
float getMultiply (float a, float b){
	float multiplicacion;

	multiplicacion = a * b;
	return multiplicacion;
}
float getDivide (float a, float b){
	float division;

	if (b == 0)
	{
	}
	else
	{
	division = a / b;
	}
	return division;
}
int getFactorial (int numero){
	int factorial = 1;
	int i;
	if(factorial < 0)
	{
	}
	else
	{
		for(i=1;i<=numero;i++)
		{
		factorial = factorial*i;
		}

	}
return factorial;
}
float getNumber(char mensaje[])
{
    float auxFloat;
    printf("%s", mensaje);
    scanf("%f", &auxFloat);

    return auxFloat;
}

