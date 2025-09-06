#include <stdio.h>
#include <math.h>
int main()
{
	int T;
	int N, total;
	scanf("%d", &T);
	
	for (int i = 1; i <= T; i++){
		scanf("%d", &N);
		printf("Case %d:", i);
		for (int j = 1; j <= N; j++){
			total = (pow(j, 2) / 2) - (j / 2) + 1;
			printf("% d", total);
		}
		printf("\n");
	}
	return 0;
}
