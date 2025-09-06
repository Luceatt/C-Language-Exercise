#include<stdio.h>
int x1, y1;
int x2, y2;
int result;

char papan[9][9];

void catur(int x1, int y1, int x2, int y2, int move){
	if(papan[x1][y1] == '\0' || x1 < 0 || y1 < 0 || x1 > 7 || y1 > 7 || move > result){
		return;
	}
	
	if(x1 == x2 && y1 == y2){
		if(move < result){
			result = move;
		}
		return;
	}
	
	catur(x1+1, y1+2, x2, y2, move + 1);
	catur(x1+1, y1-2, x2, y2, move + 1);
	catur(x1-1, y1+2, x2, y2, move + 1);
	catur(x1-1, y1-2, x2, y2, move + 1);
	catur(x1+2, y1+1, x2, y2, move + 1);
	catur(x1+2, y1-1, x2, y2, move + 1);
	catur(x1-2, y1+1, x2, y2, move + 1);
	catur(x1-2, y1-1, x2, y2, move + 1);
}

int main(){
	int t;
	scanf("%d", &t); getchar();
	
	for(int i = 0; i < t; i++){
		char hitam[3];
		char putih[3];
		
		scanf("%s %s", &hitam, &putih);
		
		x1 = 8 - (hitam[1] - '0');
		x2 = 8 - (putih[1] - '0');
		y1 = hitam[0] - 'A';
		y2 = putih[0] - 'A';
		
		for(int j = 0; j < 8; j++){
			for(int k = 0; k < 8; k++){
				papan[j][k] = '.';
			}
		}
		
		result = 100;
		catur(x1, y1, x2, y2, 0);
		
		printf("Case #%d: %d\n", i+1, result);
		
		x1 = 0, y1 = 0;
		x2 = 0, y2 = 0;
		result = 0;
		
		for(int j = 0; j < 9; j++){
			for(int k = 0; k < 9; k++){
				papan[j][k] = '\0';
			}
		}
	}
	
	return 0;
}

