#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int n, m;
	
	for(int i= 0; i < t; i++){
		scanf("%d %d", &n, &m);
		long long int matrix[n+2][m+2];
		long long int total = 0;
		
		for(int j = 0; j < n; j++){
			long long int maks = 0;
			for(int k = 0; k < m; k++){
				scanf("%lld", &matrix[j][k]);
				if(maks < matrix[j][k]){
					maks = matrix[j][k];
				}
			}
			total += maks;
		}
		printf("Case #%d: %lld\n", i+1, total);
	}
	
	return 0;
}
