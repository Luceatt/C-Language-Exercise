#include <stdio.h>
int main()
{
	int T, B;
	long long int A, C, hasil1;
	scanf("%d", &T);
	
	for (int i = 1; i <= T; i++){
		scanf("%lld %d %lld", &A, &B, &C);
		hasil1 = A * B / 100;
		if (hasil1 <= C){
			printf("Case #%d: %lld\n", i, hasil1);
		}
		else {
			printf("Case #%d: %lld\n", i, C);
		}
	}
	return 0;
}
