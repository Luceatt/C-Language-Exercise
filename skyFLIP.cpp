#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n); getchar();
	
	char string[n+2][n+2];
	char stringOut[n+2][n+2];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%c", &string[i][j]);
		}
		getchar();	
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			stringOut[n - 1 - i][n - 1 - j] = string[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%c", stringOut[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
