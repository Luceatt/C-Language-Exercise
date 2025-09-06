#include<stdio.h>
FILE *fp;

int count = 0;

int main(){
	fp = fopen("testdata.in", "r");
	
	int t;
	fscanf(fp, "%d\n", &t);
		
	for(int i = 0; i < t; i++){
		int n, left, right;
		fscanf(fp, "%d %d %d\n", &n, &left, &right);
		
		char angka[10001];
		fscanf(fp, "%s\n", &angka);
//		printf("%s\n", angka);
		
		int total = 0;
		for(int j = 0; j < n; j++){
			int count = 0;
			while(angka[j] == '1'){
				count++;
				j++;
			}
			if(count >= left && count <= right){
				total++;
			}
		}
		printf("Case #%d: %d\n", i+1, total);
	}
	
	fclose(fp);
	
}
