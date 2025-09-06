#include<stdio.h>
void sumLeaves(int arr[], int index, int size, int sum){
	if(index < size){
		sum += arr[index];
		
		if(2 * index + 1 >= size && 2 * index + 2 >= size){
			printf("%d\n", sum);
			return;
		}
		
		sumLeaves(arr, 2 * index + 1, size, sum);
		sumLeaves(arr, 2 * index + 2, size, sum);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int size;
		scanf("%d", &size);
		
		int arr[size+1];
		for(int j = 0; j < size; j++){
			scanf("%d", &arr[j]);
		}
		
		printf("Case #%d:\n", i+1);
		sumLeaves(arr, 0, size, 0);
	}
}
