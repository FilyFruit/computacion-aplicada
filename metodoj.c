#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	float A[99][99], E[99][99];
	float C[99], B[99], X0[99], X1[99], dif[99];
	float tol, suma, max;
	int n, i, j;
	
	printf("Ingresar dimension de la matriz, luego la tolerancia\n");
	scanf("%d %f", &n, &tol);
	
	/*
	 * printf("Ingrese X0(1), X0(2), X0(3), respectivamente\n");
     *scanf("%f %f %f", &X0[0], &X0[1], &X0[2]);
	 */
	
	// A y B y semilla
	A[0][0] = 2;
	A[0][1] = 0.3;
	A[0][2] = 0.2;
	A[1][0] = 0.1;
	A[1][1] = 3;
	A[1][2] = 0.4;
	A[2][0] = 0.1;
	A[2][1] = 0.2;
	A[2][2] = 5;

	B[0] = 12;
	B[1] = 12;
	B[2] = 10;
	
	X0[0] = 0;
	X0[1] = 0;
	X0[2] = 0;
	
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
				E[i][j] = (-1 * A[i][j]) / A[i][i];
			}
		}
	}
	
	printf("E(1,1) = %lf, E(1,2) = %lf, E(1,3) = %lf\n", E[0][0], E[0][1], E[0][2]); // print E fila 1
	printf("E(2,1) = %lf, E(2,2) = %lf, E(2,3) = %lf\n", E[1][0], E[1][1], E[1][2]); // print E fila 2
	printf("E(3,1) = %lf, E(3,2) = %lf, E(3,3) = %lf\n", E[2][0], E[2][1], E[2][2]); // print E fila 3
	
	printf("C(1) = %2.2f, C(2) = %2.2f, C(3) = %2.2f\n", C[0], C[1], C[2]); // print C
	
	max = 1;
	
	while (max > tol)
	{	
		printf("entro\n");
		suma = 0;
		
		for (i=0; i<n; i++) // X1
		{
			for (j=0; j<n; j++)
			{
				suma = E[i][j] * X0[j] + suma;
				
			}
			X1[i] = suma + C[i];
		}
		
		for (i=0; i<n; i++) // diferencia
		{
			dif[i] = fabs ((X0[0]) - (X1[0]));
			max = dif[0];
			for (i=1; i<n; i++)
			{
				if (dif[i] > max)
				{
					max = dif [i];
				}
			}
		}
		
		for (i=0; i<n; i++) // X0 toma el valor de X1
		{
			X0[i] = X1[i];
		}
		
	}
	
	printf("salio\n");
	
	printf("X(1) = %lf, X(2) = %lf, X(3) = %lf", X1[0], X1[1], X1[2]);
	
	return 0;
}
