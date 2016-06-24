#include <stdio.h>

int main()
{
	FILE *datos;
	float mayor;
	int i;
	float cantidad;
	
	datos = fopen("temperatura.txt", "r");
	mayor = 0;
	while (feof(datos)==0)
	{
		cantidad++;
	}
	
	printf("Cantidad de datos: %f", cantidad);
	/*
	float temperaturas[cantidad];
	
	for (i = 0 ; i<cantidad ; i++)
	{
		scanf("%f", &temperaturas[i]);
		
		if (temperaturas[i] > mayor)
		{
			mayor = temperaturas[i];
		}
	}
	
	printf("El numero mayor es: %f \n", mayor);
	*/
	fclose(datos);
	return 0;
}
