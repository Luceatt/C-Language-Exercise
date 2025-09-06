#include <stdio.h>
int main()
{
	int T = 3;
	double a, b, c, d;
	double a1, b1, c1, d1;
	double a2, b2, c2, d2;
	double hasil, hasil1, hasil2;
	
	scanf("%d\n", &T);
	scanf("%lf %lf %lf %lf\n", &a, &b, &c, &d);
	scanf("%lf %lf %lf %lf\n", &a1, &b1, &c1, &d1);
	scanf("%lf %lf %lf %lf", &a2, &b2, &c2, &d2);
	
	hasil = (a * 2) + (b * 2) + (c * 4 / 3) + (d * 2 / 4);
	hasil1 = (a1 * 2) + (b1 * 2) + (c1 * 4 / 3) + (d1 * 2 / 4);
	hasil2 = (a2 * 2) + (b2 * 2) + (c2 * 4 / 3) + (d2 * 2 / 4);
	
	printf("%.2lf\n", hasil);
	printf("%.2lf\n", hasil1);
	printf("%.2lf\n", hasil2);
	
	return 0;
}
