#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t); getchar();
	int n;
	for(int i = 0; i < t; i++){
		scanf("%d", &n); getchar();
		char string[n+2];
		scanf("%s", &string); getchar();
		int panjang = strlen(string);
		
		int counterlili = 0;
		int counterbibi = 0;
		for(int j = 0; j < panjang; j++){
			if(string[j] == 'L'){
				counterlili++;
			} else if(string[j] == 'B'){
				counterbibi++;
			} else if(string[j] == 'T'){
				counterlili++;
				counterbibi++;
			}
		}
		if(counterlili > counterbibi){
			printf("Lili\n");
		} else if(counterbibi > counterlili){
			printf("Bibi\n");
		} else if(counterbibi == counterlili){
			printf("None\n");
		}
	}
	return 0;
}
