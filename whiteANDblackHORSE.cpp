#include<stdio.h>
int x1, y1;
int x2, y2;
char papan[9][9];

int benar = 0;

void kudaHitam(int posX, int posY, int move){
	if(papan[posX][posY] == '\0' || papan[posX][posY] == '#' || posX < 0 || posY < 0 || posX > 7 || posY > 7 || move < 0){
		return;
	}
	
	papan[posX][posY] = '#';
	move--;
	
	kudaHitam(posX + 2, posY + 1, move);
	kudaHitam(posX + 2, posY - 1, move);
	kudaHitam(posX - 2, posY + 1, move);
	kudaHitam(posX - 2, posY - 1, move);
	kudaHitam(posX + 1, posY + 2, move);
	kudaHitam(posX + 1, posY - 2, move);
	kudaHitam(posX - 1, posY + 2, move);
	kudaHitam(posX - 1, posY - 2, move);
}

void kudaPutih(int posX, int posY, int move){
	if(papan[posX][posY] == '\0' || posX < 0 || posY < 0 || posX > 7 || posY > 7 || move < 0){
		return;
	}
	
	if(papan[posX][posY] == '#'){
		benar = 1;
		return;
	}
	
//	benar = 0;		<<MASALAH>>
	move--;
	
	kudaPutih(posX + 2, posY + 1, move);
	kudaPutih(posX + 2, posY - 1, move);
	kudaPutih(posX - 2, posY + 1, move);
	kudaPutih(posX - 2, posY - 1, move);
	kudaPutih(posX + 1, posY + 2, move);
	kudaPutih(posX + 1, posY - 2, move);
	kudaPutih(posX - 1, posY + 2, move);
	kudaPutih(posX - 1, posY - 2, move);
}

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int move;
		scanf("%d", &move); getchar();
		
		char hitam[3];
		char putih[3];
		scanf("%s %s", &hitam, &putih);
		
		for(int j = 0; j < 8; j++){
			for(int k = 0; k < 8; k++){
				papan[j][k] = '.';
			}
		}
		
		x1 = 8 - (hitam[1] - '0');
		x2 = 8 - (putih[1] - '0');
		y1 = hitam[0] - 'A';
		y2 = putih[0] - 'A';
		
		kudaHitam(x1, y1, move);
		kudaPutih(x2, y2, move);
		
		if(benar == 1){
			printf("Case #%d: YES\n", i+1);
		} else{
			printf("Case #%d: NO\n", i+1);
		}
		
		x1 = 0, y1 = 0;
		x2 = 0, y2 = 0;
		benar = 0;
		
		for(int j = 0; j < 9; j++){
			for(int k = 0; k < 9; k++){
				papan[j][k] = '\0';
			}
		}
	}
	
	return 0;
}
