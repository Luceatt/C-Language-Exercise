#include <stdio.h>
#include <math.h>
int main()
{
	long long int N, win;
	
	scanf("%lld", &N);
	
	win = pow(2, N);
	
	printf("%lld\n", win - 1);
	
	return 0;
}
