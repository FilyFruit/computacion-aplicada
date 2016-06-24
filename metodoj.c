#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	float A[99][99], E[99][99];
	float C[99], B[99], X0[99], X1[99];
	float tol, maximo;
	int n, i, j, cota;
	
	printf("Ingresar dimension de la matriz, luego la tolerancia\n");
	scanf("%d %f", &n, &tol);
	n=n+1;
	
	// A y B
	A[1][1] = 2;
	A[1][2] = 0.3;
	A[1][3] = 0.2;
	A[2][1] = 0.1;
	A[2][2] = 3;
	A[2][3] = 0.4;
	A[3][1] = 0.1;
	A[3][2] = 0.2;
	A[3][3] = 5;

	B[1] = 12;
	B[2] = 12;
	B[3] = 10;
	
	//semilla
	X0[1] = 0;
	X0[2] = 0;
	X0[3] = 0;
	
	for (i=0; i<n ;i++) //Construcción de C
	{
		C[i]=B[i] / A[i][i];
	}
	
	for (i=0; i<n; i++) // Construcción de E
	{
		for (j=0; j<n; j++)
		{
			if (i == j)
			{
				E[i][j] = 0;
			}
			else
			{
				-A[i][j] / A[i][i];
			}
		}
	}
	
	printf("E(1,1) = %f, E(1,2) = %f, E(1,3) = %f", E[1][1], E[1][2], E[1][3]); // print E fila 1
	printf("E(1,1) = %f, E(1,2) = %f, E(1,3) = %f", E[1][1], E[1][2], E[1][3]); // print E fila 2
	printf("E(1,1) = %f, E(1,2) = %f, E(1,3) = %f", E[1][1], E[1][2], E[1][3]); // print E fila 3
	
	printf("C(1) = %f, C(2) = %f, C(3) = %f", C[1], C[2], C[3]); // print C
	
	cota = 1;
	
	while (cota > tol)
	{	
		for (i=0; i<n; i++) // Estimaciones
		{
			for (j=0; j<n; j++)
			{
				X1[i] = E[i][j] * X0[i] + C[i];
			}
		}
		
		maximo = fabs ((X0[0]) - (X1[0]));
		
		for (i=0; i<n; i++) // Cota
		{
			if (fabs ((X0[i]) - (X1[i])) > maximo)
			{
				maximo = fabs ((X0[i]) - (X1[i]));
			}
		}
		
		for (i=0; i<n; i++) // X0 toma el valor de X1
		{
			X0[i] = X1 [i];
		}
	}
	
	printf("X(1) = %f, X(2) = %f, X(3) = %f", X0[1], X0[2], X0[3]);
	
	return 0;
}
