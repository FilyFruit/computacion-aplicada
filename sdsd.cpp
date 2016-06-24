#include <stdio.h>
#include <math.h>

int main() {
	
	double g(double);
	float a, b, m, delta;
	double fm, error;
	
	printf("ingrese a y b\n");
	scanf("%f %f", &a, &b);
	
	printf("ingrese error\n");
	scanf("%lf", &error);
	
	m = (a+b)/2;
	fm = g(m);
	delta=(b-a)/2;

	while(delta > error)
	{
		if(g(a) * fm < 0)
		{
			b = m;
		}
		else
		{
			a = m;
		}
		m = (a+b)/2;
		fm = g(m);
		delta = (b-a)/2;
	}
	
	printf("raiz en %2.2f", m);
	return 0;
}

double g(double x)
{
	double z;
	z= cos (x) - x;
	return z;
}

