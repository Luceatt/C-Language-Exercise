#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d", &T);
	char arr[100];
	
	for(int i = 0; i < T; i++){
		scanf("%s", &arr);
		printf("Case #%d: %d\n", i+1, strlen(arr));
	}
	
	return 0;
}
