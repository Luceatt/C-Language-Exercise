#include<stdio.h>
#include<string.h>
FILE *fp;

struct student{
	char nim[11];
	char nama[21];
};

void tukar(struct student *a, struct student *b) {
    struct student temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(struct student stdn[], int n){
	for (int i = 0; i < n - 1; i++) {
		int isSwapped = 0;
		
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(stdn[j].nim, stdn[j + 1].nim) > 0) {
                tukar(&stdn[j], &stdn[j + 1]);
                isSwapped = 1;
            }
        }
        if(isSwapped == 0){
        	return;
		}
    }
}

int main(){
	struct student stdn[1001];
	int n;
	fp = fopen("testdata.in", "r");
	
	fscanf(fp, "%d\n", &n);
	
	int i = 0;
	while(!feof(fp)){
		fscanf(fp, "%s %[^\n]\n", &stdn[i].nim, &stdn[i].nama);
		i++;
	}
	
	bubbleSort(stdn, n);
	
	for(int j = 0; j < n; j++){
		printf("%s %s\n", stdn[j].nim, stdn[j].nama);
	}

	fclose(fp);
	
	return 0;
}
