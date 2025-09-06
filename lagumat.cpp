#include <stdio.h>
int main()
{
	long long int A, B, C;
	
	scanf("%lld", &A);
	
	B = A + A;
	C = B - 1;
	
	printf("%lld plus %lld is %lld\n", A, A, B);
	printf("minus one is %lld\n", C);
	
	return 0;
}
