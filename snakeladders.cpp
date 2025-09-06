#include <stdio.h>
int main()
{
	int N;
	int arr[N];
	int pos = 0;
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &arr[i]);
		pos += arr[i];
			if(pos == 9){
			pos = 21;
		} else if(pos == 33){
			pos = 42;
		} else if(pos == 76){
			pos = 92;
		} else if(pos == 53){
			pos = 37;
		} else if(pos == 80){
			pos = 59;
		} else if(pos == 97){
			pos = 88;
		}
	}
	
	printf("%d\n", pos);
	
	return 0;
}
