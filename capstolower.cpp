#include<stdio.h>
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	char arr[N];
	scanf("%s", &arr[N]);
	
	for(int i = 0; i < M; i++){
		int index;
		scanf("%d", &index);
		
		if((arr[index] >= 97) && (arr[index] <= 122)){
			arr[index] = arr[index] - 32;
		}
		else if((arr[index] >= 65) && (arr[index] <= 90)){
			arr[index] = arr[index] + 32;
		}
	}
	printf("%s\n", arr);
	
	return 0;
}
