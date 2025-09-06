#include <stdio.h>
int main()
{
	int hit1 = 100;
	int bonus = 50;
	long long int n;
	
	scanf("%lld", &n);
	
	int total = ((hit1 * 2) + ((n - 1) * bonus)) * n / 2;
	
	printf("%lld\n", total);
	
	return 0;
}
