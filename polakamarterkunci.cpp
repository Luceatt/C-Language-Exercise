#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n, m;
		scanf("%d %d", &n, &m);
		
		int arrpola;
		int simpan[n+2] = {0};
		
		for(int j = 1; j <= m; j++){
			scanf("%d", &arrpola);
			
			for(int k = 1; k <= n; k++){
				if(k % arrpola == 0){
					simpan[k]++;
				}
			}
		}
		
		int test = 0;
		for(int k = 1; k <= n; k++){
			if(simpan[k] % 2 == 0){
				test = 1;
				break;
			}
		}
		
		printf("Case #%d:", i);
		
		if(test == 1){
			for(int k = 1; k <= n; k++){
				if(simpan[k] % 2 == 0){
					printf(" %d", k);
				}
			}
		} else{
			printf(" No room left!");
		}
	
		printf("\n");
	}
	
	return 0;
}
