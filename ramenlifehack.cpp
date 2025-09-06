#include <stdio.h>

int main ()
{
	int T;
	long long int K, N, M;
	
	scanf("%d", &T);
	
	for (int i=1; i<=T; i++) {
		scanf("%lld %lld %lld", &K, &N, &M);
	
	if (K <= (N + M)) {
		printf("Case #%d: yes\n", i);
	}
	
	else {
		printf("Case #%d: no\n", i);
	}
	}
	return 0;
}
