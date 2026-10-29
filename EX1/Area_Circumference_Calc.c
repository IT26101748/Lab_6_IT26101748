#include <stdio.h>

float Area(float a);
float Circumference(float b);

int main()
{
	float radius,A,C;
	printf("Input Radius: ");
	scanf("%f",&radius);

	A =Area(radius);
	C =Circumference(radius);
	printf("Area of the circle is %.2f cm^2\n",A);
	printf("Circumference of the circle is %.2f cm\n",C);

	return 0;
}
	
float Area(float a)
{	
	float area;
	area = 22.0/7.0*a*a;
	return area;
}

float Circumference(float b)
{
	float circumference;
	circumference = 2.0*22.0/7.0*b;
	return circumference;
}

