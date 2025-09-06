#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int arr[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}
	
	int kelompok = 0;
	for(int j = 0; j < N; j++){
		int total = 0;
		for(int k = 0; k < N; k++){
			if(arr[j] == arr[k]){
				total++;
			}
		}
		if(total > kelompok){
			kelompok = total;
		}
		
	}
	printf("%d\n", kelompok);
	
	return 0;
}
