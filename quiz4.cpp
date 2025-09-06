#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t); getchar();
	
	for(int i = 0; i < t; i++){
		char string[102];
		scanf("%[^\n]", &string);
		getchar();
		int len = strlen(string);
		
		char huruf;
		scanf("%c", &huruf); 
		getchar();
		
		for(int j = 0; j < len; j++){
			if(string[j] >= 65 && string[j] <= 90){
				if(string[j] == huruf){
					string[j] = string[j] + 32;
				} 
			} else if(string[j] >= 97 && string[j] <= 122){
				if(string[j] == huruf){
					string[j] = string[j] - 32;
				}
			}
		}
		printf("%s\n", string);
	}
	return 0;
}
