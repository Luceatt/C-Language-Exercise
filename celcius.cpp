#include <stdio.h>
int main()
{
	int T = 3;
	double A, B, C;
	double reamur, reamur1, reamur2;
	double fahrenheit, fahrenheit1, fahrenheit2;
	double kelvin, kelvin1, kelvin2;
	
	scanf("%lf\n", &T);
	scanf("%lf\n", &A);
	scanf("%lf\n", &B);
	scanf("%lf", &C);
	
	reamur = A * 4 / 5;
	reamur1 = B * 4 / 5;
	reamur2 = C * 4 / 5;
	
	fahrenheit = A * 9 / 5 + 32;
	fahrenheit1 = B * 9 / 5 + 32;
	fahrenheit2 = C * 9 / 5 + 32;
	
	kelvin = A + 273;
	kelvin1 = B + 273;
	kelvin2 = C + 273;
	
	printf("%.2lf %.2lf %.2lf\n", reamur, fahrenheit, kelvin);
	printf("%.2lf %.2lf %.2lf\n", reamur1, fahrenheit1, kelvin1);
	printf("%.2lf %.2lf %.2lf\n", reamur2, fahrenheit2, kelvin2);
	
	return 0;
}
