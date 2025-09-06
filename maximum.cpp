#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int n;
	
	for(int i = 0; i < t; i++){
		scanf("%d", &n);
		int arr[n];
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
		}
		
		int nilaimaks = -1000001;
		int maks2 = -1000001;
		int total = 0;
		
		for(int j = 0; j < n; j++){
			if(nilaimaks < arr[j]){
				maks2 = nilaimaks;
				nilaimaks = arr[j];
			} else if(maks2 < arr[j] && nilaimaks != arr[j]){
				maks2 = arr[j];
			} else if(maks2 < arr[j] && nilaimaks == arr[j]){
				maks2 = arr[j];
			}
		}
		total = nilaimaks + maks2;
		printf("Case #%d: %d\n", i+1, total);

	}
	return 0;
}
