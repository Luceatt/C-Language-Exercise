#include<stdio.h>

void sort(int arr[], int n, int *count){
	for(int i = 0; i < n-1; i++){
		int isSwapped = 0;
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				(*count)++;
				isSwapped = 1;	
			}
		}
		if(isSwapped == 0){
			return;
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int n, x;
		scanf("%d %d", &n, &x);
		
		int arr[n+1];
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
		}
		
		int count = 0;
		sort(arr, n, &count);
		
		int minutes = count * x;
		
		printf("Case #%d: %d\n", i+1, minutes);
		
	}
	return 0;
} 
