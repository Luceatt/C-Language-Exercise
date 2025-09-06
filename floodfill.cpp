#include<stdio.h>

int count, x, y;
char map[105][105];
void flood(int baris, int kolom){
	if(map[baris][kolom] == '#' || map[baris][kolom] == '\0' || map[baris][kolom] == '\n' || baris < 0 || kolom < 0){
		return;
	}
	
	if(map[baris][kolom] == '.'){
		count++;
	}
	
	map[baris][kolom] = '#';
	
	flood(baris+1, kolom);
	flood(baris-1, kolom);
	flood(baris, kolom+1);
	flood(baris, kolom-1);
}


int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int baris, kolom;
		scanf("%d %d", &baris, &kolom);
		
		for(int j = 0; j < baris; j++){
			for(int k = 0; k < kolom+1; k++){
				scanf("%c", &map[j][k]);
				
				if(map[j][k] == 'S'){
					x = j;
					y = k;
				}
			}
		}
		
		flood(x, y);
		
		printf("Case #%d: %d\n", i+1, count);
		
		count = 0, x = 0, y = 0;
		for(int j = 0; j < 105; j++){
			for(int k = 0; k < 105; k++){
				map[j][k] = '\0';
				
			}
		}
	}
	
	return 0;
}
