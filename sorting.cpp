#include<stdio.h>
#include<math.h>
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

int main() {
	int t;
	scanf("%d", &t);
    int arr[t+1];
    
    for(int i = 0; i < t; i++){
    	scanf("%d", &arr[i]);
	}

    mergeSort(arr, 0, t-1);

    int maksimal = -1;
    for(int j = 0; j < t; j++){
    	if(j + 1 < t){
    		int selisih = abs(arr[j] - arr[j + 1]);
			
    		if(maksimal < selisih){
    			maksimal = selisih;
			}
		}
	}
	
	int space = 0;
	for(int j = 0; j < t; j++){
		int selisih = abs(arr[j] - arr[j + 1]);
		
    		if(selisih == maksimal){
    			if(space > 0){
    				printf(" ");
				}
    			printf("%d %d", arr[j], arr[j+1]);
    			space++;
			}		
	}
	printf("\n");

    return 0;
}
