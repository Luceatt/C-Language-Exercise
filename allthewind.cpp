#include<stdio.h>
int main()
{
	long long int T;
	scanf("%lld", &T);
	for(long long int i = 0; i < T; i++){
		long long int N;
		scanf("%lld", &N);
		long long int matrix[N][N];
		long long int sumcol[N] = {0};
		
		for(long long int j = 0; j < N; j++){
			for(long long int k = 0; k < N; k++){
				scanf("%lld", &matrix[j][k]);
				sumcol[k] += matrix[j][k];
			}
		}
		
		printf("Case #%lld:", i + 1);
		for(long long int m = 0; m < N; m++){
			printf(" %lld", sumcol[m]);
		}
		printf("\n");
	}
	return 0;
}
