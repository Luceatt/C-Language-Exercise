#include<stdio.h>
void merge(long long int arr[], long long int left, long long int right){
	long long int mid = left + (right - left) / 2;
	long long int sortedArr[right - left + 1];
	long long int curr = 0;
	long long int leftIndex = left;
	long long int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(arr[leftIndex] > arr[rightIndex]){
			sortedArr[curr] = arr[rightIndex];
			curr++;
			rightIndex++;
		} else if(arr[leftIndex] < arr[rightIndex]){
			sortedArr[curr] = arr[leftIndex];
			curr++;
			leftIndex++;
		} else if(arr[leftIndex] == arr[rightIndex]){
			sortedArr[curr] = arr[leftIndex];
			curr++;
			leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = arr[leftIndex];
		curr++;
		leftIndex++;
	}
	while(rightIndex <= right){
		sortedArr[curr] = arr[rightIndex];
		curr++;
		rightIndex++;
	}
	
	for(long long int i = 0; i < curr; i++){
		arr[left + i] = sortedArr[i];
	}
}
void mergeSort(long long int arr[], long long int left, long long int right){
	if(left < right){
		long long int mid = left + (right - left) / 2;
		
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		
		merge(arr, left, right);
	}				   
}
int main(){
	int t;
	scanf("%d", &t);
	
	long long int arr[26];
	for(int i = 0; i < t; i++){
		long long int sum = 0;
		for(int j = 0; j < 25; j++){
			scanf("%lld", &arr[j]);
			sum += arr[j];
		}
		
		mergeSort(arr, 0, 24);
		
//		for(int j = 0; j < 25; j++){
//			printf("%lld ", arr[j]);
//		}
//		printf("\n\n");
//		
		long long int angka1 = arr[0] / 2;
		long long int angka2 = arr[1] - angka1;
		long long int angka5 = arr[24] / 2;
		long long int angka4 = arr[23] - angka5;
		long long int angka3 = (sum - (10*angka1 + 10*angka2 + 10*angka4 + 10*angka5)) / 10;
		
		printf("Case #%d: %lld %lld %lld %lld %lld\n", i+1, angka1, angka2, angka3, angka4, angka5);
	}
}
