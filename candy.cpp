#include <stdio.h>
int main()
{
	int T;
	int N;
	int M;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++){
		scanf("%d %d", &N, &M);
		int buy = 1000001;
		int total = 0;
		int permen[N];
		
		for(int j = 0; j < N; j++){
			scanf("%d", &permen[j]);
			if(buy > permen[j]){
			buy = permen[j];
		}
		}
		if(M >= buy){
			total = M / buy;
		} else if(M < buy){
			total = 0;
		}
		printf("Case #%d: ", i + 1);
		printf("%d\n", total);
	}
	
	return 0;
}
