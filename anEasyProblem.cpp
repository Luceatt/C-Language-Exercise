#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	
	int arr[t+1];
	for(int i = 0; i < t; i++){
		scanf("%d", &arr[i]);
	}
	
	int susah = 0;
	for(int i = 0; i < t; i++){
		if(arr[i] == 1){
			susah = 1;
			break;
		}
	}
	
	if(susah == 1){
		printf("not easy\n");
	} else{
		printf("easy\n");
	}
	
	return 0;
}
