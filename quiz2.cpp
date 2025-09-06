#include<stdio.h>
int main()
{
	int t, n;
	scanf("%d", &t);
	scanf("%d", &n);
	int arr[t+2][n+2];
	
	for(int i = 0; i < t; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	int maks = 0;
	for(int i = 0; i < t; i++){
		int total = 0;
		for(int j = 0; j < n; j++){
			total += arr[i][j];
		}
		if(maks < total){
			maks = total;
		}
//		printf("(%d)\n", total);
	}
	printf("%d\n", maks);
	return 0;
}
