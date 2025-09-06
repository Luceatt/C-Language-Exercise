#include<stdio.h>
#include<string.h>
int main()
{
	char string[102];
	scanf("%s", string); getchar();
	
	for(int i = 0; i < strlen(string); i++){
		if(string[i] == string[i+1]){
			continue;
		}
		printf("%c", string[i]);
	}
	
//	for(int i = 0; i < strlen(string); i++){
//		printf("%c", string[i]);
//	}
	printf("\n");
	return 0;
}
