#include<stdio.h>
#include<string.h>

struct input{
	char nama[11];
	int nilai;
};

void tukar(struct input *a, struct input *b){
	struct input temp = *a;
	*a = *b;
	*b = temp;
}

void sort(struct input in[], int size){
	for(int i = 0; i < size-1; i++){
		for(int j = 0; j < size-i-1; j++){
			if(in[j].nilai < in[j+1].nilai || (in[j].nilai == in[j+1].nilai && (strcmp(in[j].nama, in[j+1].nama) > 0))){
				tukar(&in[j], &in[j+1]);
			}
		}
	}
}

int search(struct input in[], int size, char *find){
	for(int i = 0; i < size; i++){
		if(strcmp(in[i].nama, find) == 0){
		//	Elemen yang dicari ketemu, return index
			return i;
		}
	}
	// Elemen yang kita cari tidak ada
	return -1;
}

int main(){
	struct input in[1001];
	int t;
	scanf("%d", &t); getchar();
	for(int i = 0; i < t; i++){
		int n;
		scanf("%d", &n); getchar();
		
		for(int j = 0; j < n; j++){
			scanf("%[^#]#%d", &in[j].nama, &in[j].nilai); getchar();
		}
		
		sort(in, n);
		
		char find[11];
		scanf("%s", &find); getchar();
		
		int index = search(in, n, find) + 1;
		
		printf("Case #%d: %d\n", i+1, index);
	}
	
	return 0;
}
