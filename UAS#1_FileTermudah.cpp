#include<stdio.h>
FILE *fp;
int main(){
	fp = fopen("FileTermudah.txt", "r");
	int angka[1000];
	
	int count = 0;
	while(!feof(fp)){
		fscanf(fp, "%d\n", &angka[count]);
		count++;
	}
	
	int even = 1;
	int odd = 0;
	for(int i = 0; i < count; i++){
		if(angka[i] % 2 == 0){
			even *= angka[i];
		} else if(angka[i] % 2 != 0){
			odd += angka[i];
		}
	}
	
	if(even == 1){
		even = 0;
	}
	
	int result = even - odd;
	
	printf("%d\n", result);
	printf("Count: %d\n", count);
	fclose(fp);
	return 0;
}
