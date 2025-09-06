#include<stdio.h>
#include<string.h>

void sort(char newString[], int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(newString[j] > newString[j+1]){
				char temp = newString[j];
				newString[j] = newString[j+1];
				newString[j+1] = temp;
			}
		}
	}
}
int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		char string[1001];
		scanf("%s", &string);	
		int length = strlen(string);
		
		char find[1001];
		scanf("%s", &find);
		int totalHuruf = strlen(find);
		
		int count = 0;
		char simpanArr[1001] = {'\0'};
		for(int j = 0; j < totalHuruf; j++){
			for(int k = 0; k < length; k++){
				if(string[k] == find[j]){
					simpanArr[count] = string[k];
					count++;
				}
			}
		}
		
//		printf("%s\n", simpanArr);
		
		sort(simpanArr, count);
		printf("%s\n", simpanArr);
	}
	
	
	return 0;
}
