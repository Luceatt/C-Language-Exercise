#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	char string[1002];
	
	for(int i = 0; i < t; i++){
		scanf("%[^\n]", string);
		getchar();
		
		int panjang = strlen(string);
		
		printf("Case #%d: ", i+1);
		
		for(int j = panjang-1; j >= 0; j--){
		printf("%c", string[j]);	
		}
		printf("\n");	
	}
	
	return 0;
}
