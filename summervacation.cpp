#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int n;
	
	for(int i = 0; i < t; i++){
		scanf("%d", &n);
		int arr[n+2];
		
		int counter = 0;
		
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
			
		}
		
		int sama[n];
		for(int k = 0; k < n; k++){
			sama[k] = 0;
		}
		for(int k = 0; k < n; k++){
			for(int m = k+1; m < n; m++){
				for(int o = 0; o < n; o++){
					if(o != k && o != m && arr[o] == arr[k] + arr[m] && !sama[o]){
						counter++;
						sama[o] = 1;
					}
				}
			}
		}
		printf("Case #%d: %d\n", i+1, counter);
		
	}
	return 0;
}
