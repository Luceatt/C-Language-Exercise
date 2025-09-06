#include <stdio.h>
int main()
{
	double T, Ut, Ua, hasil;
	scanf("%lf %lf %lf", &T, &Ut, &Ua);
	
	hasil = T * 20/100 + Ut * 30/100 + Ua * 50/100;
	
	printf("%.2lf\n", hasil);
	
	return 0;
}
