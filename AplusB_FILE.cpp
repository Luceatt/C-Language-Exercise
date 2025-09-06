#include<stdio.h>
FILE *fp;

struct angka{
	int a;
	int b;
};

int main(){
	struct angka num;
	
	fp = fopen("testdata.in", "r");
	
	fscanf(fp, "%d %d\n", &num.a, &num.b);
	
	int total = num.a + num.b;
	
	printf("%d\n", total);
	
	fclose(fp);
	
	return 0;
}
