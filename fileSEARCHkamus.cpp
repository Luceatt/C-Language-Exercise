#include<stdio.h>
#include<string.h>
FILE *fp;

struct kamus{
	char pendek[51];
	char asli[51];
	char printArr[301];
};

int search(struct kamus kms[], int size, char find[]){
	for(int i = 0; i < size; i++){
		if(strcmp(kms[i].pendek, find) == 0){
			return i;
		}
	}
	
	return -1;
}

int main(){
	struct kamus kms[101];
	
	fp = fopen("testdata.in", "r");
	
	int t;
	fscanf(fp, "%d\n", &t);
	for(int i = 0; i < t; i++){
		fscanf(fp, "%[^#]#%[^\n]\n", &kms[i].pendek, &kms[i].asli);
	}
	
	int n;
	fscanf(fp, "%d\n", &n);
	char kalimat[101];
	
	for(int i = 0; i < n; i++){
		fscanf(fp, "%[^\n]\n", &kalimat);
		
		char *token = strtok(kalimat, " ");
		
		int index = 0;
		while(token != NULL){
		
			int foundAtIndex = search(kms, t, token);
			
			if(foundAtIndex != -1){
				strcpy(kms[index].printArr, kms[foundAtIndex].asli);
			}
			else if(foundAtIndex == -1){
				strcpy(kms[index].printArr, token);
			}
			index++;
			token = strtok(NULL, " ");
		}
		
		printf("Case #%d:\n", i+1);
		
		for(int j = 0; j < index; j++){
			if(j == index-1){
				printf("%s\n", kms[j].printArr);
			}
			else{
				printf("%s ", kms[j].printArr);
			}
		}
		
	}
	 
	fclose(fp);
	 
	return 0;
}
