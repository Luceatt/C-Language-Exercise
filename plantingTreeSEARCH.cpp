#include<stdio.h>
#include<string.h>
FILE *fp;

struct pohon{
	char nama[41];
	char jenis[41];
};

int search(struct pohon tree[], int left, int right, char *find){
	while(left <= right){
		int mid = left + (right - left) / 2;
		int cmp = strcmp(tree[mid].nama, find);
		
		if(cmp == 0){
			return mid;
		} else if(cmp < 0){
			return search(tree, mid+1, right, find);
		} else{
			return search(tree, left, mid-1, find);
		}
	}
	return -1;
}

int main(){
	struct pohon tree[1001];
	
	fp = fopen("testdata.in", "r");
	
	int t;	
	fscanf(fp, "%d\n", &t); 
	
	for(int i = 0; i < t; i++){
		fscanf(fp, "%[^#]#%[^\n]\n", &tree[i].nama, &tree[i].jenis); 
	}
	
	int n;
	fscanf(fp, "%d\n", &n); 
	
	char find[41];
	for(int i = 0; i < n; i++){
		fscanf(fp, "%s\n", &find); 
		
		int index = search(tree, 0, t-1, find);
		
		printf("Case #%d: ", i+1);
		if(index == -1){
			printf("N/A\n");
		} else{
			printf("%s\n", tree[index].jenis);
		}
	}
	
	fclose(fp);
	
	return 0;
}
