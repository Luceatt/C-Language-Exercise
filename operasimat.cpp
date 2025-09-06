#include <stdio.h>
int main()
{
	long long int A, B, C, D;
	long long int E, F, G, H;
	long long int I, J, K, L;
	
	scanf("(%lld+%lld)x(%lld-%lld)\n", &A, &B, &C, &D);
	scanf("(%lld+%lld)x(%lld-%lld)\n", &E, &F, &G, &H);
	scanf("(%lld+%lld)x(%lld-%lld)", &I, &J, &K, &L);
	
	printf("%lld ", (A + B) * (C - D));
	printf("%lld ", (E + F) * (G - H));
	printf("%lld\n", (I + J) * (K - L));
	
	return 0;
}
