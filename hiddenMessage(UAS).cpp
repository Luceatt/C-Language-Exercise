#include<stdio.h>
FILE *fp;
struct data{
	char string[101];
	int idx;
	int pjg;
};

int main(){
	struct data dt[101];
	fp = fopen("hiddenMessage.txt", "r");
	
	int t;
	fscanf(fp, "%d\n", &t);

	for(int i = 0; i < t; i++){
		fscanf(fp, "%s %d %d\n", &dt[i].string, &dt[i].idx, &dt[i].pjg);
		
		int length = dt[i].pjg + dt[i].idx;
		for(int j = dt[i].idx; j < length; j++){
			printf("%c", dt[i].string[j]);
		}
		printf("\n");
	}
	
	fclose(fp);
		
	return 0;
}
