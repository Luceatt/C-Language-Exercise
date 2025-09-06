#include <stdio.h>
int main()
{
	double a, b, c, d;
	double e, f, g, h;
	double i, j, k, l;
	double hasil, hasil1, hasil2;
	
	scanf("%lf %lf %lf %lf\n", &a, &b, &c, &d);
	scanf("%lf %lf %lf %lf\n", &e, &f, &g, &h);
	scanf("%lf %lf %lf %lf", &i, &j, &k, &l);
	
	hasil = ((a * 2) + (b * 2) + (c * 2) + d);
	hasil1 = ((e * 2) + (f * 2) + (g * 2) + h);
	hasil2 = ((i * 2) + (j * 2) + (k * 2) + l);
	
	printf("%.2lf\n", hasil);
	printf("%.2lf\n", hasil1);
	printf("%.2lf\n", hasil2);
	
	return 0;
}
