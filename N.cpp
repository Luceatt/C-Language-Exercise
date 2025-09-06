#include<stdio.h>
int main()
{
	char N1[100];
	double U1;
	int T1;
	
	char N2[100];
	double U2;
	int T2;
	
	scanf("%s", &N1);
	scanf("%lf", &U1);
	scanf("%d", &T1);
	
	scanf("%s", &N2);
	scanf("%lf", &U2);
	scanf("%d", &T2);
	
	printf("Name 1: %s\n", N1);
	printf("Height 1: %.2lf\n", U1);
	printf("Age 1: %d\n", T1);
	
	printf("Name 2: %s\n", N2);
	printf("Height 2: %.2lf\n", U2);
	printf("Age 2: %d\n", T2);
	
	return 0;
}
