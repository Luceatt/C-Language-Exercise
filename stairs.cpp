#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int arr[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}
	
	int stairs = 0;
	
	for(int j = 1; j < N; j++){
		if(arr[j] == 1){
			printf("%d ", arr[j-1]);
		}		
	}
	
	for(int k = 0; k < N; k++){
		stairs = arr[N-1];		
	}

	printf("%d\n", stairs);
	
	return 0;
}
