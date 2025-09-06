#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t); getchar();
	
	for(int j = 0; j < t; j++){
		char string[1001];
		char num[1001];
		scanf("%s", string); getchar();
		
		for(int i = 0; i < strlen(string); i++){
            num[i] = '0';
        }
		
		for(int i = 0; i < strlen(string); i++){
			if(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
				num[i] = '0';
			} else if(string[i] == 'B' || string[i] == 'F' || string[i] == 'J' || string[i] == 'P' || string[i] == 'V'){
				num[i] = '1';
			} else if(string[i] == 'C' || string[i] == 'G' || string[i] == 'K' || string[i] == 'Q' || string[i] == 'W'){
				num[i] = '2';
			} else if(string[i] == 'D' || string[i] == 'H' || string[i] == 'L' || string[i] == 'R' || string[i] == 'X'){
				num[i] = '3';
			} else if(string[i] == 'M' || string[i] == 'S' || string[i] == 'Y'){
				num[i] = '4';
			} else if(string[i] == 'N' || string[i] == 'T' || string[i] == 'Z'){
				num[i] = '5';
			}
			
			
			if(string[i] >= 'A' && string[i] <= 'D'){
				string[i] = 'A';
			} else if(string[i] >= 'E' && string[i] <= 'H'){
				string[i] = 'E';
			} else if(string[i] >= 'I' && string[i] <= 'N'){
				string[i] = 'I';
			} else if(string[i] >= 'O' && string[i] <= 'T'){
				string[i] = 'O';
			} else if(string[i] >= 'U' && string[i] <= 'Z'){
				string[i] = 'U';
			}
			
		}
		
		num[strlen(string)] = '\0';
		printf("Case #%d:\n", j+1);
		printf("%s\n", string);
		printf("%s\n", num);
	}
	return 0;
}
