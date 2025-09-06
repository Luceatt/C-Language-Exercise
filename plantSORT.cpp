#include<stdio.h>
#include<string.h>

FILE *fp;

struct plant{
	int num;
	char nama[41];
};

void tukar(struct plant *a, struct plant *b) {
    struct plant temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct plant plt[], int n) {
    for (int i = 0; i < n - 1; i++) {
    	int isSwapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(plt[j].nama, plt[j + 1].nama) > 0) {
                tukar(&plt[j], &plt[j + 1]);
                isSwapped = 1;
            }
        }
        if(isSwapped == 0){
			return;
		}
    }
}

int main(){
	struct plant plt[1001];
	char string[100];
	int n;
	fp = fopen("testdata.in", "r");
	
	fscanf(fp, "%d\n", &n);
	
	int i = 0;
	while(!feof(fp)){
		fscanf(fp, "%d#%[^\n]\n", &plt[i].num, &plt[i].nama);
		i++;
	}
	
	sort(plt, n);
	
	for(int j = 0; j < n; j++){
		printf("%d %s\n", plt[j].num, plt[j].nama);
	}
	
	fclose(fp);
	
	return 0;
}
