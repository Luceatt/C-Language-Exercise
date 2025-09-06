#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	
	for(int j = 0; j < t; j++){
		char string[1001];
		scanf("%s", string);
		char huruf;
		char ganti;
		int n;
		scanf("%d", &n); getchar();
		for(int k = 0; k < n; k++){
			scanf("%c %c", &huruf, &ganti); getchar();
			
			for(int i = 0; i < strlen(string); i++){
				if(string[i] == huruf){
					string[i] = ganti;
				}
			}
		}
		printf("Case #%d: %s\n", j+1, string);
	}
	
	return 0;
}
