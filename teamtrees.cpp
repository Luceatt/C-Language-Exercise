#include<stdio.h>
int pohon(int n, int tree[]){
	int total = 0;
	for(int i = 0; i < n; i++){
		total += tree[i];
	}
	return total;
}

int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		int tree[n+2];
		
		for(int j = 0; j < n; j++){
			scanf("%d", &tree[j]);
		}
		
		printf("Case #%d: %d\n", i, pohon(n, tree));
	}
	
	return 0;
}
