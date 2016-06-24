#include <iostream>
#include <stdio.h>

int main() {

	FILE *datos;
	int i, n;
	float temperatura[5];
	float mayor;
	float menor;
	float promedio;
	float suma;
	
	datos = fopen ("C:\\Users\\C\\Documents\\Computacion Aplicada\\Guia3\\temperatura.txt", "r");

	n=5;
	
	for (i=0; i<n; i++)
	{
		fscanf(datos, "%f", &temperatura[i]);
	}
	
	mayor = temperatura[0];
	for (i=1; i<n; i++)
	{
		if (temperatura[i] > mayor)
		{
			mayor = temperatura[i];
		}
	}
	printf("La temperatura maxima es %2.2f", mayor);
	
	menor =  temperatura[0];
	for (i=1; i<n; i++)
	{
		if (temperatura[i] < menor)
		{
			menor = temperatura[i];
		}
	}
	printf("\nLa temperatura minima es %2.2f", menor);
	
	suma = 0;
	for (i=0; i<n; i++)
	{
		suma = suma + temperatura[i];
	}
	promedio = suma / n;
	printf("\nEl promedio es %f", promedio);
	
	fclose (datos);
}
