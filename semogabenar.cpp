#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	
	int arr[N+1];
	
	for(int i = 1; i <= N; i++){
		scanf("%d", &arr[i]);
	}
	
	int kemunculan[2*10e9]={0}; 
	int hitung = 0;
	for(int i = 1; i <= N; i++){
		kemunculan[arr[i]]++;
		if(kemunculan[arr[i]] > 1){
			continue;
		}else if(kemunculan[arr[i]] == 1){
			hitung++;
		}
	}
	
	printf("%d\n", hitung);

	return 0;
}
