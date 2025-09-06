#include <stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	
	int k;
	int position = 0;
	
	for (int i = 0; i < N; i++){
		scanf("%d",&k);
		getchar();
		
		position += k;
		
		if(position>=40){
			position -=40;
		}
		if(position == 30){
			position =10;
		}
		if(position == 12){
			position = 28;
		}
		if(position == 35){
			position = 7;
		}
	}
	printf("%d\n",position);
	return 0;
}
