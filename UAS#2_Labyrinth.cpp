#include<stdio.h>
int x1, y1;
int x2, y2;
char map[12][12];
int berhasil;
void floodfill(int posX, int posY){
	if(posX < 0 || posY < 0 || posX > 9 || posY > 9 || map[posX][posY] == '\n' || map[posX][posY] == '\0' || map[posX][posY] == '#'){
		return;
	}
	
	if(map[posX][posY] == 'E'){
		berhasil = 1;
	}
	
	map[posX][posY] = '#';

	floodfill(posX + 1, posY);
	floodfill(posX - 1, posY);
	floodfill(posX, posY + 1);
	floodfill(posX, posY - 1);
}

int main(){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 11; j++){
			scanf("%c", &map[i][j]);
			
			if(map[i][j] == 'S'){
				x1 = i;
				y1 = j;
			} 
		}
	}
	
	floodfill(x1, y1);
	
	if(berhasil == 1){
		printf("BERHASIL\n");
	} else{
		printf("GAGAL\n");
	}
//	for(int i = 0; i < 10; i++){
//		for(int j = 0; j < 11; j++){
//			printf("%c", map[i][j]);
//		}
//	}
	
	return 0;
}

//#S########
//# ##    ##
//# ## ## ##
//#       ##
//# # ### ##
//# # ### ##
//# # ### ##
//# #     ##
//# ##### ##
//#E      ##

//##########
//####    ##
//#### ## ##
//#S      ##
//### ### ##
//### ### ##
//### ######
//####    E#
//##########
//##########
