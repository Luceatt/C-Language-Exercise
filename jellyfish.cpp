#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	
	int view[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &view[i]);
		getchar();
	}
	int friends;
	scanf("%d", &friends);
	
	int d1[friends], d2[friends], total[friends];
	
	for(int j = 0; j < friends; j++){
		total[j] = 0;
		scanf("%d %d", &d1[j], &d2[j]);
		getchar();
		
		for (int k = d1[j]; k <= d2[j]; k++){
			total[j] += view[k-1];
		}
	}
	for (int l = 0; l < friends; l++){
		printf("Case #%d: %d\n", l + 1, total[l]);
	}
}
