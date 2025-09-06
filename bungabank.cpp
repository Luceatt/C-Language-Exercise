#include <stdio.h>
int main()
{
	
	long long int X;
	double Y;
	double bulan1, bulan2, bulan3;
	
	scanf("%lld %lf", &X, &Y);
	
	bulan1 = X + (X * Y / 100);
	bulan2 = bulan1 + (bulan1 * Y / 100);
	bulan3 = bulan2 + (bulan2 * Y / 100);
	
	printf("%.2lf\n", bulan3);
	
	return 0;
}
