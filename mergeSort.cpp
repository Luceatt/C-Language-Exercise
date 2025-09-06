#include<stdio.h>
void merge(int arr[], int left, int right){
	int mid = left + (right - left) / 2;
	int sortedArr[right - left + 1];
	int curr = 0;
	int leftindex = left;
	int rightindex = mid+1;
	
	while(leftindex <= mid && rightindex <= right){
		if(arr[leftindex] > arr[rightindex]){
			sortedArr[curr] = arr[rightindex];
			curr++;
			rightindex++;
		} else if(arr[leftindex] < arr[rightindex]){
			sortedArr[curr] = arr[leftindex];
			curr++;
			leftindex++;
		} else if(arr[leftindex] == arr[rightindex]){
			sortedArr[curr] = arr[leftindex];
			curr++;
			leftindex++;
		}
	}
	
	while(leftindex <= mid){
		sortedArr[curr] = arr[leftindex];
		curr++;
		leftindex++;
	}
	
	while(rightindex <= right){
		sortedArr[curr] = arr[rightindex];
		curr++;
		rightindex++;
	}
	
	for(int i = 0; i < curr; i++){
		arr[left+i] = sortedArr[i];
	}
}

void mergeSort(int arr[], int left, int right){
	if(left < right){
		int mid = left + (right - left) / 2;
		
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		
		merge(arr, left, right);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	
	int arr[t+1];
	for(int i = 0; i < t; i++){
		scanf("%d", &arr[i]);
	}
	
	mergeSort(arr, 0, t-1);
	
	for(int i = 0; i < t; i++){
		printf("%d", arr[i]);
		
		if(i < t-1){
			printf(" ");
		}
	}
	printf("\n");
	
	return 0;
}
