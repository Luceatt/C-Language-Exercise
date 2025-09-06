#include<stdio.h>
struct kata{
	char huruf;
	int count;
};
char map[201][201];

void floodfill(struct kata kt[], int posX, int posY, int idx){
	if(posX < 0 || posY < 0 || map[posX][posY] == '#' || map[posX][posY] == '\0' || map[posX][posY] == '\n'){
		return;
	}
	
	if(map[posX][posY] == '.'){
		kt[idx].count = kt[idx].count + 1;
	}
	
	map[posX][posY] = '#';
	
	floodfill(kt, posX+1, posY, idx);
	floodfill(kt, posX-1, posY, idx);
	floodfill(kt, posX, posY+1, idx);
	floodfill(kt, posX, posY-1, idx);
}

void merge(struct kata kt[], int left, int right){
	int mid = left + (right - left) / 2;
	struct kata sortedArr[right - left+1];
	int curr = 0;
	int leftIndex = left;
	int rightIndex = mid+1;
	
	while(leftIndex <= mid && rightIndex <= right){
		if(kt[leftIndex].huruf > kt[rightIndex].huruf){
			sortedArr[curr] = kt[rightIndex];
			curr++;
			rightIndex++;
		} else if(kt[leftIndex].huruf < kt[rightIndex].huruf){
			sortedArr[curr] = kt[leftIndex];
			curr++;
			leftIndex++;
		} else if(kt[leftIndex].huruf == kt[rightIndex].huruf){
			sortedArr[curr] = kt[leftIndex];
			curr++;
			leftIndex++;
		}
	}
	
	while(leftIndex <= mid){
		sortedArr[curr] = kt[leftIndex];
		curr++;
		leftIndex++;
	}
	
	while(rightIndex <= right){
		sortedArr[curr] = kt[rightIndex];
		curr++;
		rightIndex++;
	}
	
	for(int i = 0; i < curr; i++){
		kt[left+i] = sortedArr[i];
	}
}

void mergeSort(struct kata kt[], int left, int right){
	if(left < right){
		int mid = left + (right - left) / 2;
		
		mergeSort(kt, left, mid);
		mergeSort(kt, mid+1, right);
		
		merge(kt, left, right);
	}
}

int main(){
	struct kata kt[27];
	int size, jumlahHuruf;
	scanf("%d %d", &size, &jumlahHuruf); getchar();
	
	int x[jumlahHuruf+1] = {0};
	int y[jumlahHuruf+1] = {0};
	int index = 0;
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size + 1; j++){
			scanf("%c", &map[i][j]);
			
			if(map[i][j] >= 'a' && map[i][j] <= 'z'){
				kt[index].huruf = map[i][j];
				x[index] = i;
				y[index] = j;
				index++;
			}
		}
	}
	
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size+1; j++){
			printf("%c", map[i][j]);
		}
	}
	
	printf("Koordinat X:\n");
	for(int i = 0; i < index; i++){
		printf("%d\n", x[i]);
	}
	
	printf("Koordinat Y:\n");
	for(int i = 0; i < index; i++){
		printf("%d\n", y[i]);
	}
	
	for(int i = 0; i < index; i++){
		kt[i].count = 0;
	}
	
	for(int i = 0; i < jumlahHuruf; i++){
		floodfill(kt, x[i], y[i], i);
	}
	
	mergeSort(kt, 0, jumlahHuruf-1);
	
	for(int i = 0; i < jumlahHuruf; i++){
		printf("%c %d\n", kt[i].huruf, kt[i].count+1);
	}
	
	return 0;
}

//5 3
//#####
//#a#b#
//##.##
//#.c.#
//#####
