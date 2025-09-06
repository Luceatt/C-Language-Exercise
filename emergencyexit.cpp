#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int n, napas;
		scanf("%d %d", &n, &napas);
		char map[n+1];
		scanf("%s", map);
		
		int alive;
		int stair1 = -1;
		int stair2 = -1;
		
		for(int k = 0; k < n; k++){
			if(map[k] == '1'){
				stair1 = k;
				break;
			}
		}
		
		for(int k = n-1; k >= 0; k--){
			if(map[k] == '1'){
				stair2 = k;
				break; 
			}
		}
		
		if(n <= napas){
			alive = 1;
		} else if(stair1 == stair2){
			alive = 0;
		} else if(stair1 < napas && (n - 1 - stair2) < napas){
			alive = 1;
		} else{
			alive = 0;
		}
		
		if(alive == 1){
			printf("Case #%d: Alive\n", i+1);
		} else{
			printf("Case #%d: Dead\n", i+1);
		}
	}
	return 0;
}
