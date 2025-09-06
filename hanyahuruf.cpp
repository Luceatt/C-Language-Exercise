#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t); getchar();
	
	int n;
	for(int i = 0; i < t; i++){
		scanf("%d", &n); getchar();
		char string[n+2];
		scanf("%[^\n]", string); getchar();
		
		printf("Case #%d: ", i+1);
		
		for(int j = 0; j < n; j++){
			if(!(string[j] >= 'a' && string[j] <= 'z')){
				continue;
			} else{
				printf("%c", string[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
