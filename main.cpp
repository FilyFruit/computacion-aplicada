#include <stdio.h>

int main() {
	
	/*
	FILE *datos;
	int n;
	float contador;
	
	datos = fopen("vectores.txt", "r");
	
		while (feof(datos)==0)
	{
		fscanf (datos, "%f", &contador);
		printf("\n%f", n);
	
		n++;
	}
	
	*/
	float x[5];
	x[0] = 1;
	x[1] = 2;
	x[2] = 3;
	x[3] = 4;
	x[4] = 5;
	
	float y[5];
	y[0] = 1;
	y[1] = 2;
	y[2] = 3;
	y[3] = 4;
	y[4] = 5;
	
	float sumax = 0;
	float sumay = 0;
	float cuadradox;
	float xpory;
	float sumaxy = 0;
	float sumacuadrado = 0;
	float promediocuadrado;
	float promedioxy;
	float promediox;
	float promedioy;
	float a;
	float b;
	float denominador;
	int i;
	
	for (i=0; i<5; i++)
	{
		cuadradox = x[i]*x[i];
		sumacuadrado = sumacuadrado + cuadradox;
		xpory = x[i] * y[i];
		sumaxy = sumaxy + xpory;
		sumax = sumax + x[i];
		sumay = sumay + y[i];		 
	}

	promediox = sumax/5;
	promedioy = sumay/5;
	promediocuadrado = sumacuadrado/5;
	promedioxy = sumaxy/5;
	
	printf("promedios de x, y, x^2, x*y %f %f %f %f \n", promediox, promedioy, promediocuadrado, promedioxy);
	
	denominador = promediocuadrado - (promediox * promediox);
	a = ((promedioxy) - (promedioy * promediox)) / denominador;
	b = ((promediocuadrado * promedioy) - (promediox * promedioxy)) / denominador;
	
	printf("A y B %f %f", a, b);
	
	//fclose (datos);
	return 0;
}
