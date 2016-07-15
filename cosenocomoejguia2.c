#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float coseno (float);

int main()
{
    float x0, x1, tolerancia, cota;
   	printf("ingrese semilla\n"); 
 	scanf("%f", &x0); 
 	 
 	printf("ingrese tolerancia\n"); 
 	scanf("%f", &tolerancia); 
 	 
 	cota = 5; 

 	while (cota > tolerancia) 
 	{ 
 		x1 = coseno(x0);
 		cota = fabs(x1 - x0); 
 		x0 = x1;
 	}  
 
 	printf("el resultado es %f\n", x1); 

    return 0;
}

float coseno (float x)
{
      float z;
      z = cos(x);
      return z;
}
