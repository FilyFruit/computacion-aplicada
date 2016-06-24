#include <stdio.h>

int main() {
	FILE *datos;
	float medidas;
	float promedio;
	float operacion = 0;
	int i = 0;
	
	datos = fopen("C:\\Users\\C\\Documents\\Computacion Aplicada\\temperatura.txt", "r");
	
	printf("Las mediciones son:\n");
	
	while (feof(datos)==0)
	{
		fscanf (datos, "%f", &medidas);
		printf("\n%f", medidas);
		operacion = operacion + medidas;
		i++;
	}
	
	fclose (datos);
	
	promedio = operacion/i;
		
	printf("\nEl promedio de las mediciones es: %f", promedio);
	
	return 0;
}
