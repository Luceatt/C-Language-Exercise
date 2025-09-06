#include <stdio.h>
int main()
{
	double T, Ut, Ua;
	double final;
	
	scanf("%lf %lf %lf", &T, &Ut, &Ua);
	
	final = ((T * 20/100) + (Ut * 30/100) + (Ua * 50/100));
	printf("%.2lf\n", final);
	
	return 0;
}
