#include<stdio.h>
int main()
{
	int t;
	int n, m, q;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		scanf("%d %d %d", &n, &m, &q);
		int arr[n+2][m+2];
		
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				scanf("%d", &arr[j][k]);
			}
		}
	
		int teman[q+2];
		for(int o = 0; o < q; o++){
			scanf("%d", &teman[o]);
		}
		
		int hasil[m+2] = {0};
		
		for(int j = 0; j < q; j++){
			for(int k = 0; k < m; k++){
				hasil[k] += arr[teman[j]-1][k];
			}
		}
		
		printf("Case #%d:\n", i+1);
		
		for(int j = 0; j < m; j++){
        	if(hasil[j] % 2 == 0){
        		printf("NO\n");
			} else{
				printf("YES\n");
			}
    	}
		
	}
		
	return 0;
}
