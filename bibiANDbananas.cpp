#include<stdio.h>
int count = 0;

void merge(int arr[], int low, int mid, int high){
	int leftSize = mid - low + 1; //ukuran array dikiri ditambah 1 karna mid nya ikut ke dalam array kiri
	int rightSize = high - mid; //ukuran array kanan
	
	//buat variabel arrray kiri dan kanan
	int arrLeft[leftSize];
	int arrRight[rightSize];
	
	//isi array kiri dan array kanan
	for(int i = 0; i < leftSize; i++){
		arrLeft[i] = arr[i + low];
	}
	for(int i = 0; i < rightSize; i++){
		arrRight[i] = arr[i + mid + 1];
	}
	
	//bandingkan array kiri dan kanan
	//declare index
	int arrIdx = low;
	int arrLeftIdx = 0;
	int arrRightIdx = 0;
	
	//ketika array dikiri dan array dikanan masih ada isi
	while(arrLeftIdx < leftSize && arrRightIdx < rightSize){
		//jika nilai di array kiri pada idx skrg
		//lebih kecil dari nilai di array kanan pada index sekarang
		if(arrLeft[arrLeftIdx] < arrRight[arrRightIdx]){ 
			arr[arrIdx] = arrLeft[arrLeftIdx];
			arrIdx++;
			arrLeftIdx++;
		}else{
			arr[arrIdx] = arrRight[arrRightIdx];
			arrIdx++;
			arrRightIdx++;
		}
	}
	
	//kondisi kalau array kiri masih ada padahal array kanan sudah habis
	while(arrLeftIdx < leftSize){
			arr[arrIdx] = arrLeft[arrLeftIdx];
			arrIdx++;
			arrLeftIdx++;
	}
	
	//kondisi kalau array kanan masih ada padahal array kiri sudah habis
	while(arrRightIdx < rightSize){
			arr[arrIdx] = arrRight[arrRightIdx];
			arrIdx++;
			arrRightIdx++;
	}
}

void mergeSort(int arr[], int low, int high){
	if(low >= high)return;
	int mid = (low + high) /2;
	//proses membagi (divide)
	mergeSort(arr, low, mid);//kiri
	mergeSort(arr, mid+1, high);//kanan
	
	//proses conquer (gabungin array)
	merge(arr, low, mid, high);
}

int search(int arr[], int size, int find){
	for(int i = 0; i < size; i++){
		if(arr[i] >= find){
			count++;
		}
	}
	return count;
}

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int n, k;
		scanf("%d %d", &n, &k);
		
		int arr[n+1];
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
		}
		
		count = 0;
		mergeSort(arr, 0, n-1);
		int call = search(arr, n, k);
		
		printf("Case #%d: %d\n", i+1, call);
	}
	
	return 0;
}
