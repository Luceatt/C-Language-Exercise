#include<stdio.h>
#include<string.h>
FILE *fp;

struct student{
	char nim[11];
	char nama[21];
};

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
	
//	printf("%d\n", n);

	for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(stdn[j].nim, stdn[j + 1].nim) > 0) {
                // Tukar posisi jika nim sekarang lebih besar dari nim berikutnya
                struct student temp = stdn[j];
                stdn[j] = stdn[j + 1];
                stdn[j + 1] = temp;
            }
        }
    }
	
	for(int j = 0; j < n; j++){
		printf("%s %s\n", stdn[j].nim, stdn[j].nama);
	}

	fclose(fp);
	
	return 0;
}
