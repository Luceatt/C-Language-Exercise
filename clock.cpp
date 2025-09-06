#include <stdio.h>
int main()
{
	int T = 3;
	double A, A1, A2;
	double B, B1, B2;
	
	scanf("%lf\n", &T);
	scanf("%lf %lf\n", &A, &B);
	scanf("%lf %lf\n", &A1, &B1);
	scanf("%lf %lf", &A2, &B2);
	
	double rotasi = A/360 * B;
	double rotasi1 = A1/360 * B1;
	double rotasi2 = A2/360 * B2;
	
	printf("%.2lf\n", rotasi);
	printf("%.2lf\n", rotasi1);
	printf("%.2lf\n", rotasi2);
	
	
	return 0;
}
