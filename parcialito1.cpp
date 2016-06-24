#include <stdio.h>

int main()
{
	int n = 10;
	float a[n];
	float mayor;
	int i;
	
	printf("Ingrese 10 numeros\n");
	mayor = 0;
	for (i = 0 ; i<10 ; i++)
	{
		scanf("%f", &a[i]);
		
		if (a[i] > mayor)
		{
			mayor = a[i];
		}
	}
	
	printf("El numero mayor es: %f \n", mayor);
	return 0;
}
