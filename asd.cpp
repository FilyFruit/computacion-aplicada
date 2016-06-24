#include <stdio.h>

int main()
{
	FILE *datos;
	float mayor;
	float numero;
	
	datos = fopen("temperatura.txt", "r");
	mayor = 0;
	while (feof(datos)==0)
	{
		fscanf(datos, "%f", &numero);
		if (numero > mayor)
		{
			mayor = numero;
		}
	}
	
	printf("El numero mayor es: %f \n", mayor);
	fclose(datos);
	return 0;
}
