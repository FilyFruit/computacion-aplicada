#include <iostream>
#include <stdio.h>

int main() {

	FILE *datos;
	int i, cantidad, temp_descartable;
	float mayor;
	float menor;
	float promedio;
	float suma;
	
	datos = fopen ("C:\\Users\\C\\Documents\\Computacion Aplicada\\Guia3\\temperatura.txt", "r");

	cantidad = 0;
	while (feof(datos)==0)
	{
		fscanf(datos,"%f",&temp_descartable);
		cantidad++;
	}
	
	fclose(datos);
	
	printf("Cantidad de temperaturas medidas: %d", cantidad);
	
	datos = fopen ("C:\\Users\\C\\Documents\\Computacion Aplicada\\Guia3\\temperatura.txt", "r");

	float temperatura[cantidad];
	
	for (i=0; i<cantidad; i++)
	{
		fscanf(datos, "%f", &temperatura[i]);
	}
	
	mayor = temperatura[0];
	for (i=1; i<cantidad; i++)
	{
		if (temperatura[i] > mayor)
		{
			mayor = temperatura[i];
		}
	}
	printf("\nLa temperatura maxima es %2.2f", mayor);
	
	menor =  temperatura[0];
	for (i=1; i<cantidad; i++)
	{
		if (temperatura[i] < menor)
		{
			menor = temperatura[i];
		}
	}
	printf("\nLa temperatura minima es %2.2f", menor);
	
	suma = 0;
	for (i=0; i<cantidad; i++)
	{
		suma = suma + temperatura[i];
	}
	promedio = suma / cantidad;
	printf("\nEl promedio es %f", promedio);
	
	fclose (datos);
}
