#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	int matrix[x][y];
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	int t;
	scanf("%d", &t);
	int a = 0, b = 0, c = 0;
	for(int k = 0; k < t; k++){
		scanf("%d %d %d", &a, &b, &c);
		for(int i = 0; i < x; i++){
			for(int j = 0; j < y; j++){
				if(matrix[i][j] == matrix[a-1][b-1]){
					matrix[a-1][b-1] = c;
					break;
				}
			}
		}
	}	
	
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			printf("%d", matrix[i][j]);
			if(j < y-1){
				printf(" ");
			}
		} 
		printf("\n");
	}
		
	return 0;
}
