#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int n, m;
		scanf("%d %d", &n, &m);
		
		printf("Case #%d:\n", i+1);
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				if(j == 0 || k == 0 || j == n-1 || k == n-1){
					printf("#");
				} else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
