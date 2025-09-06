#include<stdio.h>
#include<string.h>
struct kalimat{
	char string[1001];
};

void merge(struct kalimat kt[], int left, int right){
	int mid = left + (right - left) / 2;
	struct kalimat sorted[right - left + 1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid + 1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(strcmp(kt[leftIndex].string, kt[rightIndex].string) > 0){
			sorted[curr] = kt[rightIndex];
			curr++;
			rightIndex++;
		} else if(strcmp(kt[leftIndex].string, kt[rightIndex].string) < 0){
			sorted[curr] = kt[leftIndex];
			curr++;
			leftIndex++;
		} else if(strcmp(kt[leftIndex].string, kt[rightIndex].string) == 0){
			sorted[curr] = kt[leftIndex];
			curr++;
			leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sorted[curr] = kt[leftIndex];
		curr++;
		leftIndex++;
	}
	
	while(rightIndex <= right){
		sorted[curr] = kt[rightIndex];
		curr++;
		rightIndex++;
	}
	
	for(int i = 0; i < curr; i++){
		kt[left + i] = sorted[i];
	}
}

void mergeSort(struct kalimat kt[], int left, int right){
	if(left < right){
		int mid = left + (right - left) / 2;
		mergeSort(kt, left, mid);
		mergeSort(kt, mid+1, right);
		
		merge(kt, left, right);	
	}
}

int main(){
	struct kalimat kt[1001];
	int t;
	scanf("%d", &t); getchar();
	
	for(int i = 0; i < t; i++){
		scanf("%[^\n]", &kt[i].string); getchar();
	}
	
	mergeSort(kt, 0, t-1);
	
	for(int i = 0; i < t; i++){
		printf("%s\n", kt[i].string);
	}
	
	return 0;
}
