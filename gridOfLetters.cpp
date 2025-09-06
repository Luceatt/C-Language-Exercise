#include<stdio.h>
#include<string.h>

struct kata{
	char kata[201];
};

void sort(struct kata kt[], int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c - 1; j++){
			for(int k = 0; k < c - j - 1; k++){
				if(kt[i].kata[k] > kt[i].kata[k+1]){
					char temp = kt[i].kata[k];
					kt[i].kata[k] = kt[i].kata[k+1];
					kt[i].kata[k+1] = temp;
				}
			}
		}
	}
}

void tukar(struct kata *a, struct kata *b){
	struct kata temp = *a;
	*a = *b;
	*b = temp;
}

void barisSort(struct kata kt[], int r){
	for(int i = 0; i < r-1; i++){
		for(int j = 0; j < r-i-1; j++){
			if(strcmp(kt[j].kata, kt[j+1].kata) < 0){
				tukar(&kt[j], &kt[j+1]);
			}
		}
	}
}

int main(){
	struct kata kt[201];
	
	int r, c;
	scanf("%d %d", &r, &c);
	
	for(int i = 0; i < r; i++){
		scanf("%s", &kt[i].kata);
	}
	
	sort(kt, r, c);
	
	barisSort(kt, r);
	
	for(int i = 0; i < r; i++){
		printf("%s\n", &kt[i].kata);
	}
	
	return 0;
}
