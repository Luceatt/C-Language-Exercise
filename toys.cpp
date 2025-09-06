#include <stdio.h>
int main()
{
	int T;
	int N, a, b ,c , d;
	scanf("%d", &T);
			
	for(int i = 1; i <= T; i++){
		scanf("%d %d %d %d %d", &N, &a, &b, &c, &d);
	
		int totalbuang = 0;
		for(int j = 1; j <= N; j++){
			if((j % a == 0) || (j % b == 0) || (j % c == 0) || (j % d == 0)){
				totalbuang++;
			}
		}
		printf("Case #%d: %d\n", i, totalbuang);
	}

	
	return 0;
}
