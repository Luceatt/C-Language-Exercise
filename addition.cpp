#include <stdio.h>
int main()
{
	long long int A, B, C, D, E, F;
	
	scanf("%lld + %lld =\n", &A, &B);
	scanf("%lld + %lld =\n", &C, &D);
	scanf("%lld + %lld =", &E, &F);
	
	printf("%lld\n", A + B);
	printf("%lld\n", C + D);
	printf("%lld\n", E + F);
	
	return 0;
}
