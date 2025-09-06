#include<stdio.h>
int main(){
	int N, M;
	int x, y;
	int bibi = 0,dragon = 0;
	
	scanf("%d %d", &N, &M);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &x);
		if(bibi < x){
			bibi = x;
		}
		}
	for (int j = 0; j < M; j++){
		scanf("%d", &y);
		if(dragon < y){
			dragon = y;
		}
		}
	if(bibi > dragon){
			printf("The dark secret was true\n");
	} else{
			printf("Secret debunked\n");
	}
	return 0;
	
	}
	
	

