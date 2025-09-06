#include<stdio.h>
#include<string.h>
int main()
{
	char string[52];
	scanf("%s", string); getchar();
	int len = strlen(string);
	
	int correct = 0;
	for(int i = 0, j = len-1; i < len && j >= 0; i++, j++){ 
		if(string[i] == string[j]){
			correct = 1;
		}
	}
	
	if(correct == 0){
		printf("Nay\n");
	} else{
		printf("Yay\n");
	}
	return 0;
}
