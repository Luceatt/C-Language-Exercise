#include<stdio.h>
int main()
{
	double L;
	double B;
	double H;
	
	scanf("%lf", &L);
	scanf("%lf", &B);
	scanf("%lf", &H);
	
	printf("%.3lf\n", B * H + (3 * L * B));
	
	return 0;
}
