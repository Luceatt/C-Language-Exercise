#include <stdio.h>
int main()
{
	double N, N1, N2, N3;
	double P, P1, P2, P3;
	double harga, harga1, harga2, harga3;
	
	scanf("%lf %lf\n", &N, &P);
	scanf("%lf %lf\n", &N1, &P1);
	scanf("%lf %lf\n", &N2, &P2);
	scanf("%lf %lf", &N3, &P3);
	
	harga = ((P * 100)/(100 - N));
	harga1 = ((P1 * 100)/(100 - N1));
	harga2 = ((P2 * 100)/(100 - N2));
	harga3 = ((P3 * 100)/(100 - N3));
	
	printf("$%.2lf\n", harga);
	printf("$%.2lf\n", harga1);
	printf("$%.2lf\n", harga2);
	printf("$%.2lf\n", harga3);
	
	return 0;
}
