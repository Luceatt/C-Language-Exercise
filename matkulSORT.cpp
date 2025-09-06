#include<stdio.h>
#include<string.h>

struct matkul{
	char nama[11];
	int waktu;
};

void tukar(struct matkul *a, struct matkul *b){
	struct matkul temp = *a;
	*a = *b;
	*b = temp;
}

void sort(struct matkul kuliah[], int n){
	for(int i = 0; i < n-1; i++){
		int isSwapped = 0;
		for(int j = 0; j < n-i-1; j++){
			if(kuliah[j].waktu > kuliah[j+1].waktu || (kuliah[j].waktu == kuliah[j+1].waktu && strcmp(kuliah[j].nama, kuliah[j+1].nama) > 0)){
			tukar(&kuliah[j], &kuliah[j+1]);
			isSwapped = 1;
			}
		}
		if(isSwapped == 0){
			return;
		}
	}
}

int main(){
	struct matkul kuliah[101];
	char string[100001];
	
	int n;
	
	scanf("%d\n", &n);
	
	int i = 0;
	while(i < n){
		scanf("%s %d", &kuliah[i].nama, &kuliah[i].waktu);
		i++;
	}
	
	sort(kuliah, n);
	
	for(int j = 0; j < n; j++){
		printf("%s\n", kuliah[j].nama);
	}
	
}
