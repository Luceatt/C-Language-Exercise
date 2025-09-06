#include<stdio.h>

void erase(int arr[], int size, int hapus){
	for(int i = 0; i < size; i++){
		if(arr[i] == hapus){
			arr[i] = arr[i] - hapus;
		}
	}
}



int main(){
	int size, m;
	scanf("%d %d", &size, &m);
	
	int arr[size+1];
	for(int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	
	int hapus;
	for(int i = 0; i < m; i++){
		scanf("%d", &hapus);
		
		erase(arr, size, hapus);
	}
	
	int maks = -1;
	for(int i = 0; i < size; i++){
		if(maks < arr[i]){
			maks = arr[i];
		}
	}
	
	printf("Maximum number is ");
	if(maks == 0){
		printf("-1\n");
	} else{
		printf("%d\n", maks);
	}
	
	
	return 0;
}
