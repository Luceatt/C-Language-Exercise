#include<stdio.h>
void merge(long long int arr[], long long int low, long long int mid, long long int high){
	long long int leftSize = mid - low + 1; //ukuran array dikiri ditambah 1 karna mid nya ikut ke dalam array kiri
	long long int rightSize = high - mid; //ukuran array kanan
	
	//buat variabel arrray kiri dan kanan
	long long int arrLeft[leftSize];
	long long int arrRight[rightSize];
	
	//isi array kiri dan array kanan
	for(long long int i = 0; i < leftSize; i++){
		arrLeft[i] = arr[i + low];
	}
	for(long long int i = 0; i < rightSize; i++){
		arrRight[i] = arr[i + mid + 1];
	}
	
	//bandingkan array kiri dan kanan
	//declare index
	long long int arrIdx = low;
	long long int arrLeftIdx = 0;
	long long int arrRightIdx = 0;
	
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

void mergeSort(long long int arr[], long long int low, long long int high){
	if(low >= high)return;
	long long int mid = (low + high) /2;
	//proses membagi (divide)
	mergeSort(arr, low, mid);//kiri
	mergeSort(arr, mid+1, high);//kanan
	
	//proses conquer (gabungin array)
	merge(arr, low, mid, high);
}

int main(){
	long long int n;
	scanf("%d", &n);
	
	long long int arr[n+1];
	for(long long int i = 0; i < n; i++){
		scanf("%lld", &arr[i]);
	}
	
	long long int power;
	scanf("%lld", &power);
	
	mergeSort(arr, 0, n-1);
	
	long long int count = 0;
	for(long long int j = 0; j < n; j++){
		if(power >= arr[j]){
			power -= arr[j];
		
			count++;
//			printf("Proses: %d\n", power);
		}
	}
	
	printf("%lld\n", count);	
		
	return 0;
}
