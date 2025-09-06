#include<stdio.h>
#include<string.h>

void string(int n, char input, char input2){
	if(n == 0)
		printf("%c", input);
	else if(n == 1)
		printf("%c", input2);
	else{
		string(n - 1, input, input2); 
		string(n - 2, input, input2);
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		int n;
		char input, input2;
		
		scanf("%d %c %c", &n, &input, &input2);
		printf("Case #%d: ", i);
		string(n, input, input2);
		printf("\n");
	}
	
	return 0;
}
