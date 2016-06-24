#include <stdio.h>

int main() {
	FILE *datos;
	float medidas[5];
	float promedio;
	float operacion = 0;
	int i;
	
	datos = fopen("mediciones.txt", "r");
	fscanf (datos, "%f", &medidas[0]);
	fscanf (datos, "%f", &medidas[1]);
	fscanf (datos, "%f", &medidas[2]);
	fscanf (datos, "%f", &medidas[3]);
	fscanf (datos, "%f", &medidas[4]);	
	fclose (datos);
	
	printf("Las mediciones son:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%f\n", medidas[i]);
		operacion = operacion + medidas[i];
	}
	
	promedio = operacion/i;
		
	printf("\nEl promedio de las mediciones es: %f", promedio);
	
	return 0;
}
