#include <stdlib.h>
#include <stdio.h>

#include <math.h>

/* Ejercicio Punto Fijo */

double g(double);

int main(void) 

{
	double x0, x1, cota, error;
	printf("ingrese semilla\n");
	scanf("%lf", &x0);
	
	printf("ingrese error\n");
	scanf("%lf", &error);
	
	cota = 5;

	while (cota>error)
	{
		x1 = g(x0);
		cota = fabs(x1 - x0);
		x0 = x1;	
	} 

	printf("el resultado es %lf", x1);
	
	return 0;
}

double g(double x)
{
	double z;
	z= cos (x);
	return z;
}

