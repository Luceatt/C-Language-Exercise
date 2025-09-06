#include<stdio.h>
#define MAX_SIZE 105

void fire(char map[][105], int N, int M, int x, int y){
	int moveX[] = {-1, 1, 0,  0, -1, 1,  1, -1};
	int moveY[] = { 0, 0, 1, -1,  1, 1, -1, -1};
	
	int queueX[MAX_SIZE*MAX_SIZE], queueY[MAX_SIZE * MAX_SIZE];
	int head = 0, tail = 0; 
	
	queueX[tail] = x; 
	queueY[tail] = y;
	tail++; 
	
	while (head < tail && M > 0) { 
		int size = tail - head;
		while (size > 0) {
			size--;
			
			int currX = queueX[head];
			int currY = queueY[head];
			head++;
			
			for (int i = 0; i < 8; i++) {
				int newX = currX + moveX[i];
				int newY = currY + moveY[i];
				if (newX >= 0 && newY >= 0 && newX < N && newY < N && map[newX][newY] == '#') {
					queueX[tail] = newX;
					queueY[tail] = newY;
					tail++;
					map[newX][newY] = 'F';
				}
			}
		}
		
		M--;
	}
}

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int T;
	fscanf(fp, "%d\n", &T);
	for(int tc = 1; tc <= T; tc++){
		int N, M;
		fscanf(fp, "%d %d\n", &N, &M);
		char map[105][105];
		int x, y;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				fscanf(fp, " %c", &map[i][j]);
				if(map[i][j] == 'F'){
					x = i;
					y = j;
				}
			}
		}
		
		fire(map, N, M-1, x, y);
		printf("Case #%d:\n", tc);
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				printf("%c", map[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	fclose(fp);
	
	return 0;
}

