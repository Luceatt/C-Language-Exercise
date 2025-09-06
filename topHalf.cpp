#include<stdio.h>

void merge(long long int arr[], long long int left, long long int right){
	long long int mid = left + (right-left) / 2;
	long long int sortedArr[right - left + 1];
	long long int curr = 0;
	long long int leftindex = left;
	long long int rightindex = mid + 1;
	
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

void mergeSort(long long int arr[], long long int left, long long int right){
	if(left < right){
		long long int mid = left + (right-left) / 2;
	
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
	
		merge(arr, left, right);
	}
}

int main(){
	long long int t;
	scanf("%lld", &t);
	long long int arr[t+1];
	for(long long int i = 0; i < t; i++){
		scanf("%lld", &arr[i]);
	}
	
	mergeSort(arr, 0, t-1);
	
//	for(long long int i = 0; i < t; i++){
//		printf("%lld ", arr[i]);
//	}
	
	long long int mid = 0 + (t - 0) / 2;
	
	for(long long int i = mid+1; i < t; i++){
		printf("%lld", arr[i]);
		
		if(i < t-1){
			printf(" ");
		}
	}
	printf("\n");
	
	return 0;
}
