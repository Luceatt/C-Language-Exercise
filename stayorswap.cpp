#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int n, x, y;
	for(int i = 0; i < t; i++){
		scanf("%d %d %d", &n, &x, &y);
		int arr[n+2];
		
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
		}
		
		int maks = 0;
		for(int j = 0; j < n; j++){
			if(arr[j] <= x){
				if(maks < arr[j]){
					maks = arr[j];
				}
			}
		}
//		printf("Maks: %d\n", maks);
		
		printf("Case #%d: ", i+1);
		if(y > maks){
			printf("%d\n", y);
		} else{
			printf("%d\n", maks);
		}
	}
	return 0;
}
