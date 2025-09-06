#include <stdio.h>
int main()
{
	int T = 3;
	double P, N;
	double P1, N1;
	double P2, N2;
	
	scanf("%d\n", &T);
	scanf("%lf %lf\n", &P, &N);
	scanf("%lf %lf\n", &P1, &N1);
	scanf("%lf %lf", &P2, &N2);
	
	printf("%.2lf\n", P / 100 * N);
	printf("%.2lf\n", P1 / 100 * N1);
	printf("%.2lf\n", P2 / 100 * N2);
	
	return 0;
}
