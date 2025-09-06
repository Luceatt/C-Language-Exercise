#include <stdio.h>
int main()
{
	int T;
	int N;
	
	scanf("%d", &T);
	
	for(int i = 1; i <= T; i++){
		scanf("%d", &N);
		long long int total = 0;
		long long int a;
		for(int j = 1; j <= N; j++){
			scanf("%lld", &a);
			total += a;
		}
		printf("Case #%d: %lld\n", i, total);
	}
	
	return 0;
}
