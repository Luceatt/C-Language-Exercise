#include<stdio.h>
int search(int arr[], int left, int right, int find){
	if(left <= right){
		int mid = left + (right-left) / 2;
		
		if(arr[mid] == find){
			if(arr[mid - 1] == find){
				return search(arr, left, mid-1, find);
			} else{
				return mid+1;
			}
		} else if(arr[mid] < find){
			return search(arr, mid+1, right, find);
		} else if(arr[mid] > find){
			return search(arr, left, mid-1, find);
		}
	}
	
	return -1;
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	int arr[n+1];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	int find;
	for(int i = 0; i < m; i++){
		scanf("%d", &find);
		
		int result = search(arr, 0, n, find);
		printf("%d\n", result);
	}
	
	return 0;
}
