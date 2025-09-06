#include<stdio.h>
#include<string.h>
FILE *fp;

struct list{
	char nim[21];
	char nama[21];
};

int search(struct list nm[], int left, int right, char *find){
	while(left <= right){
		int mid = left + (right - left) / 2;
		int cmp = strcmp(nm[mid].nim, find);
		
		if(cmp == 0){
			return mid;
		} else if(cmp < 0){
			return search(nm, mid+1, right, find);
		} else{
			return search(nm, left, mid-1, find);
		}
	}
	return -1;
}

int main(){
	struct list nm[101];
	fp = fopen("testdata.in", "r");
	
	int n;
	fscanf(fp, "%d\n", &n);
	
	for(int i = 0; i < n; i++){
		fscanf(fp, "%s %[^\n]\n", &nm[i].nim, &nm[i].nama);
	}
	
	int t;
	fscanf(fp, "%d\n", &t);
	char find[21];
	
	for(int i = 0; i < t; i++){
		fscanf(fp, "%s\n", &find);
		
		int index = search(nm, 0, n-1, find);
		
		printf("Case #%d: ", i+1);
		if(index == -1){
			printf("N/A\n");
		} else{
			printf("%s\n", nm[index].nama);
		}
	}
	
	fclose(fp);
	
	return 0;
}
