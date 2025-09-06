#include <stdio.h>
int main()
{
	int T;
	int a, b, c, d, e , f;
	
	scanf("%d", &T);
	for(int i = 1; i <= T; i++){
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
		printf("Case #%d: ", i);
		for(int j = 1; j <= a; j++){
			printf("a", j);
		}
		for(int k = 1; k <= b; k++){
			printf("s", k);
		}
		for(int l = 1; l <= c; l++){
			printf("h", l);
		}
		for(int m = 1; m <= d; m++){
			printf("i", m);
		}
		for(int n = 1; n <= e; n++){
			printf("a", n);
		}
		for(int o = 1; o <= f; o++){
			printf("p", o);
		}
		printf("\n");
	}
	
	return 0;
}
