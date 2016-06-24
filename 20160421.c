#include <stdlib.h>
#include <stdio.h>

#include <math.h>

/* Ejercicio Newton Raphson */

double f (double);
double fd (double);

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
		x1 = x0 - f(x0)/fd(x0);
		cota = fabs(x1 - x0);
		x0 = x1;	
	} 

	printf("el resultado es %lf", x1);
	
	return 0;
}

double f(double x)
{
	double z;
	z= x - cos (x);
	return z;
}

double fd(double x)

{
	double z;
	z = 1 + sin (x);
	return z;
}

