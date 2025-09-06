#include<stdio.h>
#include<string.h>
struct kalimat{
	char string[101];
	int count;
};

void searchVokal(struct kalimat kt[], int size, int length){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < length; j++){
			if(kt[i].string[j] == 'a' || kt[i].string[j] == 'o' || kt[i].string[j] == 'e' || kt[i].string[j] == 'i' || kt[i].string[j] == 'u'){
				kt[i].count++;
			}
		}
	}
}

void sortVokal(struct kalimat kt[], int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(kt[j].count > kt[j+1].count || kt[j].count == kt[j+1].count && (strcmp(kt[j].string, kt[j+1].string) > 0)){
				struct kalimat temp = kt[j];
				kt[j] = kt[j+1];
				kt[j+1] = temp;
			}
		}
	}
}

int main(){
	int n;
	int m;
	scanf("%d %d", &n, &m);
	
	struct kalimat kt[101];
	for(int i = 0; i < n; i++){
		scanf("%s", &kt[i].string);
	}
	
	for(int i = 0; i < n; i++){
		kt[i].count = 0;
	}
	
	searchVokal(kt, n, m);
	
	for(int i = 0; i < n; i++){
		printf("Count: %d\n", kt[i].count);
	}
	
	sortVokal(kt, n);
	for(int i = 0; i < n; i++){
		printf("String: %s, Count: %d\n", kt[i].string, kt[i].count);
	} 
	
	return 0;
}
