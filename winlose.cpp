#include <stdio.h>
#include <math.h>
int main()
{
	long long int n;
	long long int total;
	
	scanf("%lld", &n);
	
	total = pow(2, n);
	
//	total = 1 << n;
//	*Notes: p << n, artinya adalah 2 ^ n x p
	
	printf("%lld\n", total - 1);
	
	return 0;
}
