#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int x, y, z;
	
	int counter = 0;
	for(int i = 0; i < t; i++){
		scanf("%d %d %d", &x, &y, &z);
		
		if(y > z && y > x){
			counter++;
		}
	}
	printf("%d\n", counter);
	return 0;
}
